# 12_file_io

3/25
textfile_student_save
- ofstream : text 파일 쓰기

textfile_student_load

get_textfile
- ios::in : 파일에서 처음부터 읽기

textfile_append
- ios::out | ios::app : 파일의 끝에 데이터를 저장
- fstream : 파일모드 지정 필요

textfile_getline
- char(c style), string(c++ style)
- 속도, 메모리사용 효율이 좋아서 char을 많이 씀

binaryCopy_GetPut
- get/put : 문자 혹은 바이트 단위로 파일 입출력
- binary 이므로 int 사용

binary_ReadWrite
- read/write : 블록 단위로 파일 입출력
- 훨씬 빠른 속도로 읽고 쓰기 가능
- fin.eof() : 파일 끝이면 true 반환
- read(char[], int) : 넣을 저장소, 크기
- gcount() : 읽어드린 byte 수 반환
- write(char[], int) : 꺼낼 저장소, 크기

binaryCopy_ReadWrite

array_ReadWrite
- char 자료형
    - write([배열], sizeof([배열]))
    - read([배열], sizeof([배열]))
- 그외 배열 자료형
    - write((char*)[배열], sizeof([배열]))
    - read((char*)[배열], sizeof([배열]))
- 그외 단일 자료형
    - write((char*)(&[변수]), sizeof([변수]))
    - read((char*)(&[변수]), sizeof([변수]))

testStreamState
