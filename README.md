# embedded-system-2024
IoT 개발자 임베디드시스템 학습 리포지토리

## 1일차
- 개발환경 설치
    - 라즈베리파이 ip 주소 확인
    - 라즈베리파이 리눅스 설치
    - C언어 실행

## 2일차
- putty 명령어 모음
    1. pwd : 현재 디렉토리의 위치를 확인
    2. cd : 지정된 경로로 디렉토리 이동
        - 형식 : cd (디렉토리 이름)
        - 절대경로 : /(최상위 디렉토리)에서부터 시작
        - 상대경로 : 현재 위치에서부터 시작
            - ./ : 현재위치, ../ : 상위 디렉토리
    3. ls : 디렉토리의 파일 목록을 보여줌
        - -l : 현재 위치의 디렉토리 안에 내용 자세히 출력
        - -a : 현재 위치의 디렉토리 안에 숨겨진 것까지 모두 출력
        - /etc : 환경에 관련된 디렉토리 
    4. clear : 터미널 화면을 지움
    5. cp : 파일 또는 디렉토리 복사
        - 형식 : cp (파일1) (파일2) 
    6. gcc -o (별칭) (파일명) : 컴파일
    7. ./별칭 또는 파일명 : 파일 실행하기
    8. mkdir : 디렉토리 생성
        - 형식 : mkdir (디렉토리 이름)
    9. rm : 디렉토리 및 파일을 제거
        - 형식 : rm (옵션) (파일명)
        - -rf : 디렉토리를 강제로 지움
    10. mv : 디렉토리 및 파일을 이동시키거나 이름 변경
        - 형식 : mv (파일1) (파일2)
- putty 단축키 모음
    - Ctrl + S : 저장
    - Ctrl + x : 나가기
- 