
:: Take Arguments From Build Event
set Platform=%1
set Configuration=%2

:: 만약 Argument가 들어오지 않았을 경우 기본값 설정
if "%Platform%"=="" set Platform=x64
if "%Configuration%"=="" set Configuration=Debug

:: 메시지 표시
echo Running %0... 
echo Mode: %Platform%, %Configuration%

set SRC=.\External\dll\%Platform%\%Configuration%\*.dll
set DEST=.\Bin\%Platform%\%Configuration%

:: 폴더가 없을 경우 폴더 생성
if not exist %DEST% ( mkdir %DEST% )

:: *.dll 파일 복사
xcopy /d /s /y /i /r %SRC% %DEST%


:: 1번 Argument에 아무것도 들어오지 않았을 경우(== 직접 실행했을 경우) 일시 정지
if "%1"=="" pause
