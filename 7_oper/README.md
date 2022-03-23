# 7_friend_oper
3/22
friend_클래스_전역함수
- friend : private 맴버를 외부에서 접근 가능하게 하는 키워드
- 1) 전역함수에서 private 맴버 접근 진행

friend_클래스
- 2) B 클래스 전체에서 A 클래스의 private 맴버 접근 진행

friend_맴버함수
- 3) A 클래스 일부 맴버 함수에서 B 클래스의 private 맴버 접근 진행
- 전방선언 
    - 해당 A 클래스 맴버 함수는 B 클래스 아래에 구현되어야 컴파일러가 해석할 수 있음
    - A 클래스가 B 클래스의 맴버를 참조하면, B 클래스를 전방선언 해야 함

---
operator
- 클래스 안에서 연산자의 의미를 새롭헤 구현하는 방식
- operator : 연산자(+, - 등) 함수로 선언하는 키워드

operator_overloading
- 맴버 함수에 의한 방법
    - p1 + p2;>> p1.operator+(p2);
- 전역 함수에 의한 방법
    - p1 + p2;>> operator+(p1, p2);

opOverloading_append
- 리턴 타입이 void인 경우
    - void operator+=(const [클래스]& p) {}
    - 불가능 : (p1+=p2).[매소드];
- 리턴 타입이 참조자인 경우
    - [클래스]& operator+=(const [클래스]& p) { return *thist;}
    - 가능 : (p1+=p2).[매소드];

operator_overloading_int
- 첫번째 인자가 this(맴버 객체)가 아닐 경우
    - 30 + p1;>> operator+(30, p1);
    - 반드시 전역함수로 연산자 오버로딩으로 선언해야 함

operator_overloading2
- 전위연산 (선연산)
    - ++p1;
    - 맴버 함수: p1.operator++();
    - 전역 함수: operator++(p1);
    - 참조자로 클래스를 인자로 받아 증가시킨 다음 this 리턴
- 후위연산 (후연산)
    - p1++;
    - 맴버 함수: p1.operator++(int);
    - 전역 함수: operator++(p1, int);
    - 함수 내에서 포인터 생성하고 증가시킨 다음 리턴
---
3/23

operator_overloading3
- 단항 연산자 오버로딩 진행
- -[클래스] : 맴버 부호 변경
- ~[클래스] : 두 맴버 교환

---
defaultEqual_operator
- 디폴트 대입 연산자
    - [클래스] &operator=(const [클래스] &ref) {return *this;}
    - 자신과 같은 클래스형의 레퍼런스를 인자로 갖고 그 레퍼런스를 대입하는 연산자

person_deepCopy
- '5_fun_ref_copy\person_shallowCopy.cpp' 가져옴
- 디폴트 대입 연산자 사용

stringClass_operator_overloading
- 확인해보기