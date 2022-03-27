# 6_fun_over_static
3/21
sum_overloading
- 함수 overloading (int, int 배열)

swap_overloading
- 여러 자료형에 따른 함수 overloading
- 포인터와 참조형 활용 진행 (num, char, double, string, char[])

default_parameter
- default 인자는 뒤 변수부터 주기
- default 인자는 선언부에만 주기

default_parameter_모호성
- 모호한 호출 : overload 모호하여 컴파일러가 어떤 함수를 호출해야하는지 판단하지 못하는 경우
- 1) default 매개 변수로 인한 모호성
- 2) 형 변환으로 인한 모호성 (double vs float)
- 3) 참조 매개 변수로 인한 모호성

---
3/22 (봐야함)
default_parameter_vectorclass
- 생성자 함수의 중복 간소화(default 매개 변수 사용)

---
static_circle
- 동적변수
    - 객체마다 생성
    - 맴버 변수
- 정적변수
    - 객체 전체에 하나에만 생성
    - 클래스 내에서 공유되는 변수
    - [클래스]::[정적변수]로 호출 가능
- 클래스 정적변수 초기화 (클래스 외부에서 진행하는 방법)
- 정적 매서드
    - 정적 변수만 접근 가능
    - 일반 맴버에는 접근 불가능

---
const_student
- 상수화된 매서드 : [자료형] [함수명]() const {}
- 상수화된 매서드는 상수화된 매서드만 호출 가능
- 상수화된 매서드에서 일반 맴버는 수정 불가
- mutable
    - 상수화된 매서드에서도 변경 가능한 변수 키워드
    - const로 선언하면 수정 불가능
- 상수화된 매서드는 맴버의 주소를 반환 불가
    - const로 선언된 객체는 상수화된 매서드에서 받아야 함
    - const [자료형]* [함수명]() const {} 로 return 가능

const_상수객체
- 일반 객체 생성
    - 일반 매서드로 우선 생성
    - 일반 매서드가 존재하지 않을 경우, 상수화된 매서드로 생성 (오버로딩)
- 상수 객체 생성
    - 상수화된 매서드로 접근
    - 상수화된 매서드가 존재하지 않을 경우, 오류 발생