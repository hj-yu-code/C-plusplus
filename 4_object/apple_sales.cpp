#include <iostream>
using namespace std;

/*
seller  APPLE_PRICE numOfApples myMoney
        (1000)      (20)        (0)
        1000        2000        3000

buyer   numOfApples myMoney
        (0)         (50000)
        4000        5000
*/

class AppSeller // 판매자
{
private:
    const int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    AppSeller(int price, int num, int money) : APPLE_PRICE(price){ // 상수는 콜론 초기화
        numOfApples = num;
        myMoney = money;
    }
    void ShowSellerResult() const {
        cout << "판매할 사과 수량 : " << numOfApples << endl;
        cout << "판매 수익 : " << myMoney << endl;
    }
    int SaleApples(int money) {
        int n = money / APPLE_PRICE;
        if(n > numOfApples){
            cout << "남아있는 사과의 수량은 : " << numOfApples << endl;
            cout << "구매할 수 있는 최대 금액은 : " << numOfApples * APPLE_PRICE << endl;
        }
        numOfApples -= n;
        myMoney += money;
        return n;
    }
};

class AppBuyer // 구매자
{
private:
    int numOfApples;
    int myMoney;
public:
    AppBuyer(int money) {

        numOfApples = 0;
        myMoney = money;
    }
    void ShowBuyerResult() const {
        cout << "구매할 사과 개수 : " << numOfApples << endl;
        cout << "현재 잔액 : " << myMoney << endl;
    }
    // 메세지 전달 : 객체간의 통신은 메세지에 의해서 의사전달을 하는데,
    // 이러한 메세지는 그 객체에 있는 메서드를 호출하는 것이다.
    // 메세지 전달 = 객체간의 통신 = 메세지 큐
    void BuyApples(AppSeller &_seller, int money) {
        if(money <= 0){
            cout << "구매금액은 0원 이상 !!" << endl;
            return;
        }
        if(money > myMoney){
            cout << "남아있는 금액은 : " << myMoney << endl;
            cout << "이 금액 이하로 구입하세요."<< endl;
            return;
        }
        int ret = _seller.SaleApples(money);
        if(ret!=0) {
            numOfApples += ret;
            myMoney -= money;
        }
    }
};

int main(){
    AppSeller seller(1000, 20, 0);
    AppBuyer buyer(50000);

    seller.ShowSellerResult();
    buyer.ShowBuyerResult();
    cout << "===================" << endl;

    buyer.BuyApples(seller, 2000);
    seller.ShowSellerResult();
    buyer.ShowBuyerResult();
    cout << "===================" << endl;

    buyer.BuyApples(seller, -3000);
    buyer.BuyApples(seller, 70000);
    cout << "===================" << endl;

    buyer.BuyApples(seller, 30000);


    return 0;
}