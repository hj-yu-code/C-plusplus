# 10_stl
3/28
template_�Լ�_intro
- template �ʿ伺 : �ߺ� �Լ��� ���� �����ϰ� ���� �� ����

template_�Լ�_swap
- class ��ü�� swap ���� (������ �ʿ�)
- template ����
    - ���ÿ� ���
        - �����Ϸ��� ���� �������� ���� �� ����
    - ������ ���� �޽��� ���
    - ����뿡 ���� �����

template_�Լ�_print
- �Ϲ��Լ��� template �Լ����� �켱 ����
- print<char>(char, int)
    - template �Լ��� �켱 ������ ȣ��

template_�Լ�_�����ڷ���
- ���� �ڷ��� ���
    - template <typename T1, typename T2>

template_�Լ�_sizeof
- �ڷ��� ũ�� ���ϱ�
    - sizeof([����])
    - strlen([���ڿ�])

template_�Լ�_add
- template �Լ��� �Ϲ� �Լ��� method overloading
- ���� �Լ����̶���� ���ڰ� �ٸ��� template �Լ��� ����

template_data_class
- class ������ ���� ������ Ÿ������ �ޱ�
- class template�� ������ �ڷ����� ����ؾ� ��
    - Data<int> d1(100);

data_class_�������и�
- ������
    - template<typename T> : �� �Լ����� �ۼ� �ʼ�
    - Data<T>::Data(T n) {} : [Ŭ����]<T>:: �������� ���
- ���ø��� ��� : ����ο� ������ �Ѵ� �־� ��
- data.h (���, ����)
    - #ifndef _DATA_
    - #define _DATA_
    - ���ø� ����� �� ������
    - #endif
- data_method.cpp (����, �����)
    - #include "data.h"
    - ��ǻ� data_method ������ �ʿ����

template_point_class
- class template�� �Լ� template ���� ���
- class ��ü�� ���� ���� �� �����ڷ� �ޱ�
    - void swapData(T &x, T &y)

template_point_class_add
- �Լ� template���� Add �Լ� ����
- class template���� operation���� '+' ����
- operation & ��������� ���

template_point_class2
- ���� class template ��ü ����
    - Point<int, double> p1;
- �������� ���ʷ� Ÿ�� ���� ����

stack