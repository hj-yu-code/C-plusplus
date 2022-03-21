# 4_object
3/18

> 포인터
>> class나 struct에 있는 매개변수 부를 때는 "->"로 부르기

> 참조자
>> class나 struct에 있는 매개변수 부를 때는 "."으로 부르기

> 동적 할당 메모리
>> 항상 끝날 때 heap 에 있는 메모리 반환(delete) 시키기

circle_pointer전달
- 포인터로 class 주소 부르기

circle_array
- class 배열로 부르기

circle_new
- class 동적 할당 메모리 진행

circle_newArray
- class 배열 객체 동적 할당 및 반환
    - class 포인터 객체 만들기
    - 객체를 함수 인자로 넘기고 함수 내에서 동적 배열 할당
    - 함수 내에서 cin 으로 배열 객체에 메모리 입력
- delete[] _array;

this_pointer
- class 내 this 및 동적 메모리 사용
- this
    - 부른 포인터가 가르키는 주소값
    - class 내에서 사용할 수 있는 메소드
    - 인자와 매개변수가 같다면 this로 구별 가능
- &_x == _x의 this

string_class_method
- c++ string class의 여러 메소드 소개

---
3/21

NameCard
- namespace활용(enum 함수)
- class 맴버 변수 Array로 동적으로 할당
- class 소멸 시 동적 맴버 변수 메모리 반환