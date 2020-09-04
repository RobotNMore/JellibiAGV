#ifndef __COMMANDBUILDER_H__
#define __COMMANDBUILDER_H__
/** 
 *  Copyright (c) 2019 Robot&More, jhlee@robotnmore.com(signaled@gmail.com)
 *  
 *  See the file license.txt for copying permission  
 */

#include "Define.h"

class CommandBuilder
{
private:
    enum {
        eInitialPosition = 0, 
        eWareHousePosition, 
        eTargetPosition
    } _currentPosition;

    CMD _cmdList[MAX_CMD];
    uint8_t _cmdIndex;
    uint8_t _buildIndex;
    
    void DebugCMDList();
    bool BuildCmdInitToWareHouse(String strUID);
    bool BuildWareHouseToTargetPosition(String strUID);
    bool BuildTargetPositionToWarePosition(String strUID);

    String s_strRFIDUidForStart = String("09D0047F");
    
    String s_strRFIDUidForSeoul = String("0442743AAD5E81");
    String s_strRFIDUidForIncheon = String("04E5B58A8A5F80"); // box 1
    String s_strRFIDUidForSejong = String("044A743AAD5E81");
    String s_strRFIDUidForDaejeon= String("04DDB18A8A5F80"); // box2
    
public:
    CommandBuilder();
    ~CommandBuilder();
    void Init();
    bool BuildCmdList(String strUID);
    CMD GetCommand();
    void Next();
};



#endif//__COMMANDBUILDER_H__
