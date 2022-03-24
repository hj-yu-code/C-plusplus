# 8_9 _inheritance

3/23
color_point_inheritance
- 기본 상속 진행
- 상속 받아도 private은 사용불가 (외부접근)

protected_colorPoint
- protected : 파생 클래스에서만 사용 (상속이 아니면 private으로 인식)
- protected를 사용하면 상속만 하면 마구잡이로 변경이 가능하므로 주의해서 사용해야 함
- friend 키워드로 접근 가능

상속관계_생성자_소멸자
- 파생 클래스 생성자에서 기반 클래스 생성자 호출 가능
- 기반 클래스가 없으면 빈괄호 생성자가 호출 됨

person_생성자_소멸자

객체_upcasting
- UpCast 
    - 기반 클래스 포인터가 파생클래스 포인터를 정하는 것 -> 다향성
    - 가르키는 대상에 상관없이 기반 클래스 내에 선언된 맴버와 상속된 클래스에만 접근 가능
- DownCast
    - 파생 클래스 객체 포인터는 기반 클래스 주소를 저장할 수 없음
- 명시적 형변환
    - C sytle : (PartTimeStd*)p1
    - C++ style : (static_cast<PartTimeStd*>(p1))

객체포인터_reference1

클래스상속_접근지정자

overriding_intro
- Method Overriding
    - 함수 재정의 -> 다향성
    - 기반 클래스에 선언된 멤버와 같은 형태의 멤버를 파생 클래스에서 선언
    - 오버라이딩한 파생 클래스 매서드를 호출
    - 기반 클래스 매서드를 가리는 효과
        - 범위연산자(::)로 명시적으로 호출 가능
        - [파생 클래스].[기반 클래스]::[매서드]();

3/24
person_overriding
- 명시적 접근 사용

---
overriding_vitual_intro
- 가상함수
- 안되는 이유 확인하기!!!!

calc_class
- 다향성 : 같은 함수를 다르게 사용
- virtual로 overriding 진행

순수가상함수_overriding


shape_overriding

employeeCalc

상속에서_소멸자

다중상속_intro
- 기반 클래스에 같은 함수가 있으면 모호성 발생
- 범위연산자로 기반 클래스 함수 호출

다중상속모호성_virtual