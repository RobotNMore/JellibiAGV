# 2019 WCRC 대학/일반부 샘플 
**Jellibi** **A**utomated **G**uided **V**ehicle

### 구현 내용

Senior 프로젝트와 동일한 구성으로 대학/일반부 샘플에서는 명령어를 만들어내는 부분만 다르며 큰 틀에서는 동일하게 동작합니다. 

Senior 프로젝트에서 추가된 부분은 아래와 같습니다. 

| 클래스 명(파일명)                           | 동작 내용                                                    |
| ------------------------------------------- | ------------------------------------------------------------ |
| CommandBuilder<br />(CommandBuilder.h/.cpp) | RFID 리더에서 읽어들인 UID 값으로 ```CommandBuilder``` 클래스의 내부에 명령어 목록을 만들어 둡니다. <br />```Application``` 에서는 ```CommandBuilder::GetCommand()``` 함수를 이용하여 생성된 명령을 하나 가져오고 모든 처리가 다이루어 진후에 ```CommandBuilder::Next()``` 함수를 호출하여 다음 명령을 준비하도록 합니다. |

끝. 

