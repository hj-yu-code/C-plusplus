# 3_class
3/17
OOP_introl1
- 구조체의 단점 : 구조체 내부 데이터를 조작하는 함수는 따로 구현해야 함
- C언어 : 함수중심 언어

OOP_introl2
- 구조체 내부로 함수 위치 변경

OOP_introl3
- class로 변경

---

circle
- class 예시
- class 선언(declaration) 및 구현(implementation)

class_access
- public : 외부접근 허락
- private : 내부접근 허락, default

class_정보은닉
- private 선언 변수 사용방법
- 외부 class 가져오기
---
circle_생성자
- 생성자 : 클래스 이름과 동일한 멤버 함수
- 생성자 역할 : 멤버 초기화
- 생성자 명시적 호출

circle_생성자2
- 이웃 생성자 호출 : 성자 중 인자를 사용할 오버로딩된 메서드를 호출하고 실행
- 콜론 초기화
- circle_생성자2_1 : 구현(implementation)부에서 생성자 콜론 초기화

circle_생성자3
- 디폴트(기본) 생성자 : 선언되어 있지 않은 경우 자동으로 생성
---
3/18

circle_소멸자실행순서
- 소멸자
- 전역 및 로컬 객체 변수의 소멸 순서
---
person_construct
- 객제의 동적 메모리 소멸자

person_construct_destruct
- class 내의 멤버 변수 동적메모리 생성 및 소멸
---
door_class
- inline 함수 : 함수 호출이 아닌 함수 대체(매크로와 유사)

door.h & door_class_method.cpp & door_class_main.cpp
- 분할 컴파일
- 클래스의 헤더와 구현부가 다를 경우, inline 함수는 헤
더 파일에 위치해야 함
- 헤더 ifndef-define-endif 를 통한 중복 사용 허용