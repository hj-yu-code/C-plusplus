# 12_file_io

3/25
textfile_student_save
- ofstream : text ���� ����

textfile_student_load

get_textfile
- ios::in : ���Ͽ��� ó������ �б�

textfile_append
- ios::out | ios::app : ������ ���� �����͸� ����
- fstream : ���ϸ�� ���� �ʿ�

textfile_getline
- char(c style), string(c++ style)
- �ӵ�, �޸𸮻�� ȿ���� ���Ƽ� char�� ���� ��

binaryCopy_GetPut
- get/put : ���� Ȥ�� ����Ʈ ������ ���� �����
- binary �̹Ƿ� int ���

binary_ReadWrite
- read/write : ��� ������ ���� �����
- �ξ� ���� �ӵ��� �а� ���� ����
- fin.eof() : ���� ���̸� true ��ȯ
- read(char[], int) : ���� �����, ũ��
- gcount() : �о�帰 byte �� ��ȯ
- write(char[], int) : ���� �����, ũ��

binaryCopy_ReadWrite

array_ReadWrite
- char �ڷ���
    - write([�迭], sizeof([�迭]))
    - read([�迭], sizeof([�迭]))
- �׿� �迭 �ڷ���
    - write((char*)[�迭], sizeof([�迭]))
    - read((char*)[�迭], sizeof([�迭]))
- �׿� ���� �ڷ���
    - write((char*)(&[����]), sizeof([����]))
    - read((char*)(&[����]), sizeof([����]))

testStreamState
