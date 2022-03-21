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

class AppSeller // �Ǹ���
{
private:
    const int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    AppSeller(int price, int num, int money) : APPLE_PRICE(price){ // ����� �ݷ� �ʱ�ȭ
        numOfApples = num;
        myMoney = money;
    }
    void ShowSellerResult() const {
        cout << "�Ǹ��� ��� ���� : " << numOfApples << endl;
        cout << "�Ǹ� ���� : " << myMoney << endl;
    }
    int SaleApples(int money) {
        int n = money / APPLE_PRICE;
        if(n > numOfApples){
            cout << "�����ִ� ����� ������ : " << numOfApples << endl;
            cout << "������ �� �ִ� �ִ� �ݾ��� : " << numOfApples * APPLE_PRICE << endl;
        }
        numOfApples -= n;
        myMoney += money;
        return n;
    }
};

class AppBuyer // ������
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
        cout << "������ ��� ���� : " << numOfApples << endl;
        cout << "���� �ܾ� : " << myMoney << endl;
    }
    // �޼��� ���� : ��ü���� ����� �޼����� ���ؼ� �ǻ������� �ϴµ�,
    // �̷��� �޼����� �� ��ü�� �ִ� �޼��带 ȣ���ϴ� ���̴�.
    // �޼��� ���� = ��ü���� ��� = �޼��� ť
    void BuyApples(AppSeller &_seller, int money) {
        if(money <= 0){
            cout << "���űݾ��� 0�� �̻� !!" << endl;
            return;
        }
        if(money > myMoney){
            cout << "�����ִ� �ݾ��� : " << myMoney << endl;
            cout << "�� �ݾ� ���Ϸ� �����ϼ���."<< endl;
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