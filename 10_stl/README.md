# 10_stl
3/28
template_함수_intro
- template 필요성 : 중복 함수의 수정 간단하게 만들 수 있음

template_함수_swap
- class 객체도 swap 가능 (생성자 필요)
- template 단점
    - 포팅에 취약
        - 컴파일러에 따라 지원하지 않을 수 있음
    - 컴파일 오류 메시지 빈약
    - 디버깅에 많은 어려움

template_함수_print
- 일반함수가 template 함수보다 우선 실행
- print<char>(char, int)
    - template 함수가 우선 순위로 호출

template_함수_다중자료형
- 다중 자료형 사용
    - template <typename T1, typename T2>

template_함수_sizeof
- 자료형 크기 구하기
    - sizeof([변수])
    - strlen([문자열])
- 템플릿 특수화
    - 해당 자료형을 만날 때 method overloading
    - template<>
    - 요즘은 잘 안쓰임

template_함수_add
- template 함수와 일반 함수의 method overloading
- 같은 함수명이라더라도 인자가 다르면 template 함수로 진행

template_data_class
- class 내에서 여러 데이터 타입으로 받기
- class template은 무조건 자료형을 명시해야 함
    - Data<int> d1(100);

data_class_선언구현분리
- 구현부
    - template<typename T> : 매 함수마다 작성 필수
    - Data<T>::Data(T n) {} : [클래스]<T>:: 형식으로 명시
- 템플릿의 헤더 : 선언부와 구현부 둘다 둬야 함
- data.h (헤더, 선언)
    - #ifndef _DATA_
    - #define _DATA_
    - 템플릿 선언부 및 구현부
    - #endif
- data_method.cpp (구현, 실행부)
    - #include "data.h"
    - 사실상 data_method 파일은 필요없음

template_point_class
- class template과 함수 template 동시 사용
- class 객체는 인자 받을 때 참조자로 받기
    - void swapData(T &x, T &y)

template_point_class_add
- 함수 template에서 Add 함수 구현
- class template에서 operation으로 '+' 구현
- operation & 복사생성자 사용

template_point_class2
- 다중 class template 객체 생성
    - Point<int, double> p1;
- 여러가지 제너럴 타입 전달 가능

stack