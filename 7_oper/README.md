# 7_friend_oper
3/22
friend_Ŭ����_�����Լ�
- friend : private �ɹ��� �ܺο��� ���� �����ϰ� �ϴ� Ű����
- 1) �����Լ����� private �ɹ� ���� ����

friend_Ŭ����
- 2) B Ŭ���� ��ü���� A Ŭ������ private �ɹ� ���� ����

friend_�ɹ��Լ�
- 3) A Ŭ���� �Ϻ� �ɹ� �Լ����� B Ŭ������ private �ɹ� ���� ����
- ���漱�� 
    - �ش� A Ŭ���� �ɹ� �Լ��� B Ŭ���� �Ʒ��� �����Ǿ�� �����Ϸ��� �ؼ��� �� ����
    - A Ŭ������ B Ŭ������ �ɹ��� �����ϸ�, B Ŭ������ ���漱�� �ؾ� ��

---
operator
- Ŭ���� �ȿ��� �������� �ǹ̸� ������ �����ϴ� ���
- operator : ������(+, - ��) �Լ��� �����ϴ� Ű����

operator_overloading
- �ɹ� �Լ��� ���� ���
    - p1 + p2;>> p1.operator+(p2);
- ���� �Լ��� ���� ���
    - p1 + p2;>> operator+(p1, p2);

opOverloading_append
- ���� Ÿ���� void�� ���
    - void operator+=(const [Ŭ����]& p) {}
    - �Ұ��� : (p1+=p2).[�żҵ�];
- ���� Ÿ���� �������� ���
    - [Ŭ����]& operator+=(const [Ŭ����]& p) { return *thist;}
    - ���� : (p1+=p2).[�żҵ�];

operator_overloading_int
- ù��° ���ڰ� this(�ɹ� ��ü)�� �ƴ� ���
    - 30 + p1;>> operator+(30, p1);
    - �ݵ�� �����Լ��� ������ �����ε����� �����ؾ� ��

operator_overloading2
- �������� (������)
    - ++p1;
    - �ɹ� �Լ�: p1.operator++();
    - ���� �Լ�: operator++(p1);
    - �����ڷ� Ŭ������ ���ڷ� �޾� ������Ų ���� this ����
- �������� (�Ŀ���)
    - p1++;
    - �ɹ� �Լ�: p1.operator++(int);
    - ���� �Լ�: operator++(p1, int);
    - �Լ� ������ ������ �����ϰ� ������Ų ���� ����
---
3/23

operator_overloading3
- ���� ������ �����ε� ����
- -[Ŭ����] : �ɹ� ��ȣ ����
- ~[Ŭ����] : �� �ɹ� ��ȯ

---
defaultEqual_operator
- ����Ʈ ���� ������
    - [Ŭ����] &operator=(const [Ŭ����] &ref) {return *this;}
    - �ڽŰ� ���� Ŭ�������� ���۷����� ���ڷ� ���� �� ���۷����� �����ϴ� ������

person_deepCopy
- '5_fun_ref_copy\person_shallowCopy.cpp' ������
- ����Ʈ ���� ������ ���

stringClass_operator_overloading
- Ȯ���غ���