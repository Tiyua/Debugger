#include <debugapi.h>
// 지정된 프로세스가 디버그되고 있는지 여부를 확인합니다.
CheckRemoteDebuggerPresent()
// 디버거가 이전에 디버깅 이벤트를 보고한 스레드를 계속할 수 있도록 합니다.
ContinueDebugEvent
// 디버거가 활성 프로세스에 연결하고 디버그할 수 있도록 합니다.
DebugActiveProcess
// 디버거가 지정된 프로세스의 디버깅을 중지합니다.
DebugActiveProcessStop
// 현재 프로세스에서 중단점 예외가 발생하도록 합니다.
DebugBreak
// 지정된 프로세스에서 중단점 예외가 발생하도록 합니다.
DebugBreakProcess
// 호출 스레드가 종료될 때 수행할 작업을 설정합니다.
DebugSetProcessKillOnExit
// 실행 컨트롤을 디버거로 전송합니다.
FatalExit
// 지정된 프로세스에 대한 명령 캐시를 플러시합니다.
FlushInstructionCache
// 지정된 스레드의 컨텍스트를 검색합니다.
GetThreadContext
// 지정된 선택기 및 스레드에 대한 설명자 테이블 항목을 검색합니다.
GetThreadSelectorEntry
// 호출 프로세스가 사용자 모드 디버거에 의해 디버그되고 있는지 여부를 확인합니다.
IsDebuggerPresent
// 표시할 문자열을 디버거에 보냅니다.
OutputDebugString
// 지정된 프로세스의 메모리 영역에서 데이터를 읽습니다.
ReadProcessMemory
// 지정된 스레드의 컨텍스트를 설정합니다.
SetThreadContext
// 디버깅 중인 프로세스에서 디버깅 이벤트가 발생할 때까지 기다립니다.
WaitForDebugEvent
// 지정된 WOW64 스레드의 컨텍스트를 검색합니다.
Wow64GetThreadContext
// 지정된 선택기 및 WOW64 스레드에 대한 설명자 테이블 항목을 검색합니다.
Wow64GetThreadSelectorEntry
// 지정된 WOW64 스레드의 컨텍스트를 설정합니다.
Wow64SetThreadContext
// 지정된 프로세스의 메모리 영역에 데이터를 씁니다.
WriteProcessMemory