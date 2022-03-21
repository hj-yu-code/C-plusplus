# 5_fun_ref_copy

object_전달
- call by value
    - 함수의 매개 변수 객체가 복사되어 스텍 할당
    - 매개 변수 객체의 생성자 호출되지 않음
    - 함수가 종료되면서 매개 변수 객체의 소멸자 호출
- call by reference
    - 함수에 매개 변수 객체의 주소가 전달되어 스텍 할당
    - fun(&a) -> void fun(class *a)
- 객체 반환(리턴)
    - class 함수를 만들어 return값 대입
- 객체 대입(치환)
    - 두 class 끼리 복사
    - 치환된 두 객체는 현재 내용물만 같을 뿐 독립적인 공간 유지

---
c_c++_초기화
- C++ style : [class] a(2);
- C style : [class] a = 2;
    - 묵시적으로 C++ style로 변환
    - explicit 생성자를 사용 시 C style로 선언 불가
    - class 생성자 인자가 1개 일 때 사용가능
---
reference1
- 참조 변수 선언 : 이미 존재하는 변수에 다른 이름(별명) 선언

reference_return
- 참조자 함수의 주소 반환 값에 대입하여 문자열 변환
- 참조자 함수의 주소 반환 값을 변수로 지정

object_전달2
- 함수에 참조자 인자가 전달되어 스텍 할당 

---
copy_constructor
- (default) 복사 생성자
    - 생성자 중 자기 자신의 클래스형 레퍼런스를 인자로 가진 것
    - 객체가 생성과 동시에 초기화 되면서 복사생성자 호출
    - 복사생성자 선언 시 그 내부 내용도 다 적어줘야 함

person_shallowCopy
- 동적 메모리일 경우, 사본의 주소가 소멸되면서 2중으로 소멸되기 때문에 런타임 에러 발생
- 복사 생성자에서 새로운 동적 메모리 할당시켜주기(= deep copy)

copy_constructor_묵시적호출
- 복사생성자가 호출되는 경우
    - 객체가 생성과 동시에 객체 초기화 될 때
    - 객체가 함수의 인자로 전달될 때 (참조자로 부르면 안됨)
    - 객체가 반환될 때 (g++에서는 안됨)
- 참조자 주소로 반환하면 바로 맴버 메소드 사용가능

NameCard_복사생성자
- shallow copy된 class 객체를 복사생성자를 통해 deep copy로 변경
- 런타임 에러 수정

int_array_copy
- int 배열 동적 메모리 할당 및 반환
- for문으로 복사생성자 생성