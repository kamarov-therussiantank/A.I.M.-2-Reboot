//--------------------
//#include "DotNet.cpp"

#define AMOUNT_ENERGY 1
#define AMOUNT_RATING_QUEST 2
#define AMOUNT_RATING_WAR   3
#define AMOUNT_RATING_TRADE 4

#define CHAR "PLAYER"
#define CLAN "ORG_PLAYER"
#define GetGliderClan GetMechClan
#define GetBuildClan GetBuildOwner

#define ERROR 999
#define EMPTY ""
#define NULL 0 

#define RATING_WAR 0
#define RATING_TRADE 1
#define RATING_QUEST 2

// ���� ������:
// ����
#define BUILDING_BASE 1
// �����
#define BUILDING_PLANT 2
//�������� ����
#define BUILDING_FEEDSTOCK 12
//������� ��������
#define BUILDING_TUNNEL 3
//������-���������
#define BUILDING_KA 5

// ���� ������ ������������
#define EQIP_GLIDER		1
#define EQIP_REACTOR	2
#define EQIP_REACTOR2	3
#define EQIP_ENGINE		4
#define EQIP_ENGINE2	5
#define EQIP_SHIELD		6
#define EQIP_ARMOR		7
#define EQIP_GUN1		8
#define EQIP_GUN2		9
#define EQIP_CONFIG		10

// ����� ������
void proc Text(char textID)
{
   UserFunc(1, textID);
}

// ����� ������� ( �� � �������� ) � ���������� ����
void proc Dialog(char textID)
{
   UserFunc(32, textID);
}

// ������� ���������� � ������
void proc SetMsgJ(char messageID)
{
   UserFunc(2, messageID);	
}

// ���� �� ���������� � �������
bool proc GetMsgJ(char messageID)
{
   if ( UserFuncInt(46, messageID)==1)
	  return true;
   else
	 return false;
}

// ������ �������
void proc StartScript(char script)
{
   UserFunc(3, script);
}

// ���������� �������� ���������� (int)
void proc SetVar(char event, int iValue=1)
{
  UserFunc(4, event, iValue);
}

// �������� �������� ���������� (int)
int proc GetVar(char event)
{
   int iValue;
   iValue = UserFuncInt(5, event);
   return iValue;
}

// �������� ���� ������
void proc AddItem(char itemname, int iCount=1)
{
	UserFunc(6, itemname, iCount);  
}

// �������� ���� ( ���������� ����) � ������
int proc GetItem(char itemname)
{
  int iValue;
  iValue = UserFuncInt(21, itemname);
  return iValue;
}

// �������� ��-���� ( ������, ����� � �.�.)
void proc AddAmount(int iWhat, int iCount)
{
	UserFunc(7, iWhat, iCount);
}

// ���������� ����� �������
void proc SetPelengPoint( char cPointer, int iMap=1)
{
   UserFunc(8, cPointer, iMap);
}

// ��������� ������ 
void proc SetSensor( char cPointer, int iIn=1)
{
   UserFunc(9, cPointer, iIn);
}

// ��������� ������ ��� NPC`�
void proc SetSensorNPC( char cPointer, char cMech, int iIn=1)
{
   UserFunc(55, cPointer, cMech, iIn);
}

// ������� ������ �� ���������.
void proc CreateObjectAt( char itemName, char cObjectType, char cPointer)
{
   UserFunc(10, itemName, cObjectType, cPointer);
}

// ������� ������
void proc DeleteObject( char cItemName)
{
   UserFunc(11, cItemName);
}

// ���������� ������� ���� ����� ����������� ������� ����� � ��������� ����������������
void proc SetBoundBetween( char cBorder1, char cBorder2, int iEnable)
{
   UserFunc(12, cBorder1, cBorder2, iEnable);
}

// �������� ������ � ���������
void proc AddItemToContainer( char cContainer, char cObjectType, int iCount=1)
{
   UserFunc(13, cContainer, cObjectType, iCount);
}

// ����� �� ���� �� ���� �������
int proc IsClanDead(char cClanID)
{
   int iValue;
   iValue = UserFuncInt(14, cClanID);
   return iValue;
}

// �������� ������� �����
int proc GetClanRating(char cClanID)
{
   int iValue;
   iValue = UserFuncInt(15, cClanID);
   return iValue;
}

// ���������� ������
// �� ���������� ����� ������� ����������� ��������� cProc,
// � ������� ���������� cItem ��� ��������
void proc SetTimer(char cProc, float fTime, char cItem="")
{
   UserFunc(16, cProc, fTime, cItem);
}

// ���������� ������
void proc StopTimer(char cProc, char cItem="")
{
   UserFunc(33, cProc, cItem);
}

// �������� ������������� �����������, ��������� ���� �������
char proc GetBuildOwner(char cBuildID)
{
   char cValue;
   cValue = UserFunc(17, cBuildID);
   return cValue;
}

// ������� �����
void proc DeleteText(char cTextID)
{
   UserFunc(18, cTextID);
}

// �������� �����
void proc CloseText(char cTextID)
{
   UserFunc(19, cTextID);
}

// �������� ���� ������ ������
void proc ClearWindow()
{
   UserFunc(20);
}

// ������� � ������ ����
void proc RemoveItem(char itemname, int iCount=1)
{
	UserFunc(22, itemname, iCount);  
}

// �������� ��������� ������ �� �������, �������� ������������
char proc GetRandomBuild(char thisBuild)
{
   char cRet;
   cRet = UserFunc(23, thisBuild);
   return cRet;
}

// ������ ������ �� 0 �� �-1 ������������
int proc RandomInt(int x)
{
   int iValue;
   iValue = UserFuncInt(24, x);
   return iValue;
}

// ��������� ��������� � �������
void proc StartScriptEvent(char sScript, char sEvent, char item, char item2="")
{
	UserFunc(25, sScript, sEvent, item, item2);
}

// ���������� ������� ����������  (char)
void proc SetVarChar(char event, char cValue)
{
  UserFunc(26, event, cValue);
}

// �������� ������� ����������  (char)
char proc GetVarChar(char event)
{
   char cValue;
   cValue = UserFunc(27, event);
   return cValue;
}

// �������� ��������� �����
char proc GetRandomGoods(char thisBuild)
{
   char cRet;
   cRet = UserFunc(28, thisBuild);
   return cRet;
}

// �������� ��� ������
int proc GetGoodsType(char goodsID)
{
   int iValue;
   iValue = UserFuncInt(29, goodsID);
   return iValue;
}

// �������� ��������� �������, ����� 
// ����������� ������ � �����������, ������� ���������� � ���������
char proc GetRandomGlider(char orgID)
{
   char cRet;
   cRet = UserFunc(30, orgID);
   return cRet;
}

// �������� �������� ��������
int proc IsKilled(char gliderID)
{
   int iRet;
   iRet = UserFuncInt(31, gliderID);
   return iRet;
}

// ������ ������������� ������
char proc GetArea()
{ 
   char sID;
   sID = UserFunc(34);
   return sID;
}

// �������� ����������� ����� ���������
char proc GetUniqueMechID()
{
   char sID;
   sID = UserFunc(40);
   return sID;
}

// �������� �������� � ����� �����..
void proc CreateMech(char mechID, char pointID, char configID)
{
	UserFunc(42, mechID, pointID, configID);
}

// �������� ���������
void proc DeleteMech(char mechID)
{
	UserFunc(43, mechID);
}

// ����������� ��������� (� ������ ������ � ������� �� �������) � ������ 
void proc AssignGliderToPlayer(char mechID, int iAssign)
{
	UserFunc(44, mechID, iAssign);
}

// �������� ��������� � �����-�� ����������� (� ��� ����� ���������)
void proc SetMechClan(char mechID, char orgID)
{
	UserFunc(45, mechID, orgID);
}

// �������� ��� ��� ���� ������� ���������
int proc GetRating(int ratingID)
{
	int iValue;
	iValue = UserFuncInt(90, ratingID);
	return iValue;
};

/*
// ???????? ????????????? ????? ?? ??????
char proc GetBuildClan(char buildID)
{
   char cValue;
   cValue = UserFunc(35, buildID);
   return cValue;
}*/

// �������� ������������� ����� ���������
char proc GetMechClan(char gliderID)
{
   char cValue;
   cValue = UserFunc(36, gliderID);
   return cValue;
}

// ������ ������ ������ ( � ������ )
// ��� ������� �� ���� ����������� �������
// void OnQuest(char questID)
void proc Quest(char questID)
{
	UserFunc(37, questID);
}

// ������� �����
void proc RemoveQuest(char questID="ALL_GENERATED")
{
	UserFunc(38, questID);
}

// �������� ������� ��������
int proc GetGliderR(char gliderID)
{
	int iValue;
	iValue = UserFuncInt(39, gliderID);
	return iValue;
}

//�������� �������
void proc SetQuest(char QuestID, char TextID,  int Award, char cTimer="" )
{
	UserFunc(47, QuestID, TextID, Award, cTimer);
}

// ��������� �������
void proc FailQuest(char QuestID)
{
	UserFunc(48, QuestID);
}

//��������� �������
void proc CompleteQuest(char QuestID)
{
	UserFunc(49, QuestID);
}

// ������ �����
void proc SetQuestPart(char QuestID, char TextID)
{
	UserFunc(50, QuestID, TextID);
}

// �������� �� �����
bool proc IsQuestFail(char QuestID)
{
   if ( UserFuncInt(51, QuestID)==1)
	  return true;
   else
	 return false;
}

//�������� �� �����
bool proc IsQuestComplete(char QuestID)
{
   if ( UserFuncInt(52, QuestID)==1)
	  return true;
   else
	 return false;
}

// ����� �� �����
bool proc IsQuestSet(char QuestID)
{
   if ( UserFuncInt(53, QuestID)==1)
	  return true;
   else
	 return false;
}

// �������� ��������� ��������� � ��������������� �� �����
char proc GetRandomPointerByMask(char sMask)
{
	char sPointer;
	sPointer = UserFunc(57, sMask);
	return sPointer;
}

// �������� ��� ������ ( ���� ������� ����)
int proc GetBuildType(char build)
{
   int iType;
   iType = UserFuncInt(56, build);
   return iType;
}

// �������� ��������� ������ ���� � �����
int proc GetClanRelation(char clanID, char clan2ID)
{
	int iType;
	iType = UserFuncInt(57, clanID, clan2ID);
	return iType;
}

// ������� ������ ( ������� �� �������������� �������������� �������������� ����� )
void proc CreateGroup(char groupID, char pointID="", int iOnlyMech=0)
{
	UserFunc(58, groupID, pointID, iOnlyMech);
}

// ������� ������ ��������� ����-��
void proc GliderGo(char gliderID, char pointID)
{
	UserFunc(59, gliderID, pointID);
}

// ���������� / ����� ��������� ������
void proc GliderInvis(char gliderID, int bVisible=1)
{
	UserFunc(60, gliderID, bVisible);
}

// ��������� ���������� ���������� � ������
int proc GetGroupCount( char groupID )
{
	int iType;
	iType = UserFuncInt(61, groupID);
	return iType;
}

// ������������ ������ �� ������� ( � ������ )
void proc Resurrect( char locationID, char buildingID="")
{
	UserFunc(62, locationID, buildingID);
}

// �������� �� ������ �� ��� ���� ������������ � �����
char proc GetEquipLayer ( int iEqipLayer )
{
	char sValue;
	sValue = UserFunc(63, iEqipLayer);
	return sValue;
} 

// �������� ����������� ������������ � �����
int proc GetEquipLayerModif ( int iEqipLayer )
{
	return UserFunc(96, iEqipLayer);
} 

// ���������� ������ �� ��� ���� ������������ � �����
void proc InstallEquipLayer ( int iEqipLayer, char eqpID, int iModif = 0 )
{
	UserFunc(64, iEqipLayer, eqpID, iModif);
} 

// ������ ������ �� ��� ���� ������������ � �����
void proc UninstallEquipLayer ( int iEqipLayer)
{
	UserFunc(65, iEqipLayer);
} 

// ������������� �� �������
void proc MoveToLocation( char locationID, char buildID = "")
{
	UserFunc(66, locationID, buildID);
}

// ������������� / �������������� ���������
void proc SetCaptureInterface( int iCapture = 1)
{
	UserFunc(67, iCapture);
}

// ���������� ��������� ����� �������
void proc SetClanRelation(char clanID, char clan2ID, int iRel)
{
	UserFunc(68, clanID, clan2ID, iRel);
}

// ���������� ��������� ����� ����������
void proc SetRelation(char gliderID, char glider2ID, int iRel, int iAlways=1)
{
	UserFunc(69, gliderID, glider2ID, iRel, iAlways);
}

// ���������� ��������� ����� ����������
void proc SetGroupClanRelation(char groupID, char orgID, int iRel)
{
	UserFunc(75, groupID, orgID, iRel);
}

//������ ���������� ������ � ������.
void proc SetBuildGoods(char cBuild, char cGoods, int iCount)
{
   UserFunc(70, cBuild, cGoods, iCount);
}

//����� �� ��� ������ (�� ��������������).
int proc IsGroupKilled(char groupID)
{
   int iRet;
   iRet = UserFuncInt(71, groupID);
   return iRet;
}

int proc GetHoldMech(char sOrg="")
{
   int iRet;
   iRet = UserFuncInt(72, sOrg);
   return iRet;
}

int proc IsBuildStop(char buildID)
{
   int iRet;
   iRet = UserFuncInt(73, buildID);
   return iRet;
}

int proc GetEquipStandard(char equipID)
{
   int iRet;
   iRet = UserFuncInt(74, equipID);
   return iRet;
}

void proc ThrowFromGlider(char gliderID, char goodID="ENERGY", int iCount=1)
{
   UserFunc(75, gliderID, goodID, iCount);
}

void proc SetMechName(char mechID, char name)
{
   UserFunc(76, mechID, name);
}

void proc SetMechGuard(char mechID, char pointID)
{
	UserFunc(77, mechID, pointID);
}

// ��������� ��������� � �������� ����
void proc SetTarget(char mechID)
{
	UserFunc(78, mechID);
}

// ����������� �����.
void proc SetTowerActive(char cTower, int iActive = 1)
{
	UserFunc(79, cTower, iActive);
}

// �������� ���������
void proc DamageGlider(char cMechID, float fValue)
{
	UserFunc(80, cMechID, fValue);
}

//���������� ��������� ���������
void proc SetMechGeneration(char cMechID, int iMechGen)
{
	UserFunc(81, cMechID, iMechGen);
}

//���������� ������ �����
void proc SetClanLider(char cClanID, char cMechID)
{
	UserFunc(82, cClanID, cMechID);
}

// �������� � ������� ������
void proc MarkMsgJ(char msg, int iMark)
{
	UserFunc(83, msg, iMark);
}

// ��������� �� ���������. ���������� �� Text ���, ��� ������� �� ����� ����� 
void proc MechSay(char mechID, char sText)
{
	UserFunc(84, mechID, sText);
}

// �������� ���� �� �������
void proc AddLocationKey(char locID, int iMulty)
{
	UserFunc(85, locID, iMulty);
}

// ��������� ���� �� �������..
bool proc IsLocKey(char locID)
{
	bool bIs;
	bIs = UserFuncInt(86, locID)==1;
	return bIs;
}

// ������� ������ ������ �������, ��������� �� �����
void proc ClearLog()
{
	UserFunc(87);
}

// �������� ��� ������ (���� ���� � ����)
int proc GetGoodsPrice(char goodsID)
{
   int iValue;
   iValue = UserFuncInt(88, goodsID);
   return iValue;
}

//������� ������ � ����� / ��������
void proc RemovePeleng(char cItem)
{
	UserFunc(89, cItem);
}

// ������ ������
int proc GetBuildSubType(char cBuild)
{
   int iValue;
   iValue = UserFuncInt(91, cBuild);
   return iValue;
}

// ������ �������
void proc CaptureLocation(char cLoc, char cOrg)
{
	UserFunc(92, cLoc, cOrg);
}

// ������ ���������� ����������, ����������� � ������ ������ � �������� ������
int proc GetMechInCluster(char cBuild, char cOrg)
{
	int iValue;
	iValue = UserFuncInt(93, cBuild, cOrg);
	return iValue;
}

// ��������� ���� � ������������� �����������.
void proc EndGame()
{
	UserFunc(94);
}

void proc PlayVideo(char cVideo, int iPlay=1)
{
	UserFunc(95, cVideo, iPlay);
}

void proc ThrowGoodsOnRoad(char goodsID, int iCount=1)
{
	UserFunc(97, goodsID, iCount);
}

void proc ChangeObjectID(char sGameID, char sTypeID)
{
	UserFunc(98, sGameID, sTypeID);
}

void proc SetEconomics(char sOrgID, int iValue, int iAdd=0)
{
	UserFunc(99, sOrgID, iValue, iAdd);
}

void proc PushConfig(char sNewConfig)
{
	UserFunc(100, sNewConfig);
}

void proc PopConfig()
{
	UserFunc(101);
}

char proc SetBuildOwner(char cBuildID, char cOrg)
{
   char sRet;
   sRet = UserFunc(102, cBuildID, cOrg);
   return sRet;
}

// ���������� ��������� ����� ����������
int proc GetRelation(char gliderID, char glider2ID)
{
	int iRel;
	iRel = UserFuncInt(103, gliderID, glider2ID);
	return iRel;
}
