# embedded-system-2024
IoT 개발자 임베디드시스템 학습 리포지토리

## 1일차
- 개발환경 설치
    - 라즈베리파이 설치
    - sd card formatter 설치
        - sd카드 포맷작업
    - putty 설치
    
## 2일차(3/12)
- putty 명령어 모음
    - pwd : 현재 디렉토리의 위치를 확인
    - cd : 지정된 경로로 디렉토리 이동
        - 형식 : cd (디렉토리 이름)
        - 절대경로 : /(최상위 디렉토리)에서부터 시작
        - 상대경로 : 현재 위치에서부터 시작
            - ./ : 현재위치, ../ : 상위 디렉토리
    - ls : 디렉토리의 파일 목록을 보여줌
        - -l : 현재 위치의 디렉토리 안에 내용 자세히 출력
        - -a : 현재 위치의 디렉토리 안에 숨겨진 것까지 모두 출력
        - /etc : 환경에 관련된 디렉토리 
    - clear : 터미널 화면을 지움
    - cp : 파일 또는 디렉토리 복사
        - 형식 : cp (파일1) (파일2) 
    - gcc -o (별칭) (파일명) : 컴파일
    - ./별칭 또는 파일명 : 파일 실행하기
    - mkdir : 디렉토리 생성
        - 형식 : mkdir (디렉토리 이름)
    - rm : 디렉토리 및 파일을 제거
        - 형식 : rm (옵션) (파일명)
        - -rf : 디렉토리를 강제로 지움
    - mv : 디렉토리 및 파일을 이동시키거나 이름 변경
        - 형식 : mv (파일1) (파일2)
- putty 단축키 모음
    - Ctrl + S : 저장
    - Ctrl + x : 나가기

## 3일차(3/13)
- VCN Viewer 설치

## 4일차(3/14)

## 5일차(3/15)

## 6일차(3/18)
- 스택 : 한 쪽 끝에서만 자료를 넣고 뺄 수 있는 LIFO 형식의 자료구조
    - ex. 되돌리기, 뒤로가기
    - 스택을 배열과 연결리스트로 구현
- 큐 : 한 쪽 끝에서는 자료의 삽입, 반대는 삭제만 가능한 FIFO 형식의 자료구조
    - ex. 은행 대기 줄, 에스컬레이터

## 7일차(3/19)
- 순차자료구조를 이용한 큐 자료구조 구현
- 연결자료구조를 이용한 큐 자료구조 구현
- makefile 만들기
    - extern
    - static