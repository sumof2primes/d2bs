# group `globalFunctions` {#group__globalFunctions}

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`Unit`](api-undefined.md#classUnit)` `[`getUnit`](#group__globalFunctions_1gab92645722228c1b850c56a97a331e64e)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` type,String name,uint32_t mode,uint32_t nUnitId)`            | Get a unit by type, name, mode and nUnitId.
`public `[`Unit`](api-undefined.md#classUnit)` `[`getUnit`](#group__globalFunctions_1ga00d41e69e334872da0d57a9406de86df)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` type,uint32_t classId,uint32_t mode,uint32_t nUnitId)`            | Get a unit by type, classId, mode and nUnitId.
`public object[] `[`getPath`](#group__globalFunctions_1ga7913f6338480cc180c015198b6c18024)`(uint32_t Area,uint32_t srcX,uint32_t srcY,uint32_t dstX,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dstY,uint32_t reductionType,uint32_t Radius)`            | Creates a path (walking or teleporting) from the source to the destination.
`public object[] `[`getPath`](#group__globalFunctions_1ga051897c1e76c0ceeccd946dbedc6ea54)`(uint32_t Area,uint32_t srcX,uint32_t srcY,uint32_t dstX,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dstY,uint32_t reductionType,uint32_t Radius,bool(*)(int32_t x, int32_t y) reject,bool(*)(object curPt, `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac) i, object[] pts)` reduce,int32_t(*)(int32_t x, int32_t y) mutate)`            | Creates a path (walking or teleporting) from the source to the destination.
`public unsigned short `[`getCollision`](#group__globalFunctions_1gac3a89f2d8c4940ae49dce43fbe2f626b)`(uint32_t nLevelId,int32_t nX,int32_t nY)`            | Get the collision flags at a given point in a given area.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getMercHP`](#group__globalFunctions_1gac4217ed30da8eb07d8addca4cdb51a9d)`()`            | Get the health points of the controlled unit's merc.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getCursorType`](#group__globalFunctions_1gaa0bc4f7877d6992600202b8dce442787)`()`            | Get the cursor type from p_D2CLIENT_RegularCursorType.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getCursorType`](#group__globalFunctions_1ga9b3530843295a8ee8fa59a3130ae7409)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType)`            | Get the cursor type from p_D2CLIENT_RegularCursorType if nType != 1, from p_D2CLIENT_ShopCursorType if nType == 1.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkillByName`](#group__globalFunctions_1gaee860cd7482aff8e89519314a0f86955)`(String skillName)`            | Get skill ID by name.
`public String `[`getSkillById`](#group__globalFunctions_1ga14cda78dea3cf554c8ebeeb0834039c9)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` skillId)`            | Get skill name by ID.
`public String `[`getLocaleString`](#group__globalFunctions_1gaf2065d798cd6a0337fb94f7bae718283)`(uint16_t localeId)`            | Get the String in the current locale that corresponds to the given id.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getTextSize`](#group__globalFunctions_1ga19d918388535584b388c00c57d76ab47)`(String string,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` font,bool asObject)`            | Get the width and height of the given text in the given font.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getThreadPriority`](#group__globalFunctions_1ga6ab5869695c97ce6e4fbc6899e16a75d)`()`            | Get the priority of the current thread.
`public bool `[`getUIFlag`](#group__globalFunctions_1gac259c30bc648650e021f45f1c020e412)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nUIId)`            | Get whether or not a UI flag is set.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getTradeInfo`](#group__globalFunctions_1gaedebe009d3f6c0afeab5cb544f430767)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode)`            | Get the TradeFlag or RecentTradeId.
`public bool `[`getWaypoint`](#group__globalFunctions_1ga4561d06e77835b04e0794758844bd987)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nWaypointId)`            | Get whether the controlled unit has the given waypoint.
`public `[`D2BSScript`](api-undefined.md#classD2BSScript)` `[`getScript`](#group__globalFunctions_1ga8340268c49de1e5f34588c01b0cf971d)`(bool currentScript)`            | Get the current or first context.
`public `[`D2BSScript`](api-undefined.md#classD2BSScript)` `[`getScript`](#group__globalFunctions_1ga02ad0d69faff60c7061a98a3e8a2b53b)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` threadId)`            | Get a script by thread id.
`public `[`D2BSScript`](api-undefined.md#classD2BSScript)` `[`getScript`](#group__globalFunctions_1gac202e144c149fa59378fd01585e6a2bd)`(String name)`            | Get a script by filename.
`public `[`D2BSScript`](api-undefined.md#classD2BSScript)` `[`getScript`](#group__globalFunctions_1ga822bdc4cbce00ca342a05bc29ffae76e)`()`            | Get the first script.
`public `[`Room`](api-undefined.md#classRoom)` `[`getRoom`](#group__globalFunctions_1ga0ec5e4d9e09bf924c1f96ce417290417)`(uint32_t levelId)`            | Get the first room in area given by level id.
`public `[`Room`](api-undefined.md#classRoom)` `[`getRoom`](#group__globalFunctions_1ga6c10567ae9eac427ef0770edb2ab8c21)`(uint32_t levelId,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y)`            | Get the room that the given point is in from the given level id.
`public `[`Room`](api-undefined.md#classRoom)` `[`getRoom`](#group__globalFunctions_1gacc763e01907b73ca5c405469cc58cf12)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y)`            | Get the room that the given point is in.
`public `[`Room`](api-undefined.md#classRoom)` `[`getRoom`](#group__globalFunctions_1gafc051829ad79986ed98043fd46bd9a2c)`()`            | Get the first room in the current area.
`public `[`Party`](api-undefined.md#classParty)` `[`getParty`](#group__globalFunctions_1gae1a5223caa888f3cc2429fad719fc7eb)`()`            | Get the first party.
`public `[`Party`](api-undefined.md#classParty)` `[`getParty`](#group__globalFunctions_1ga6a0dc4f8e9bd582b1c8c4fc4da5e2f47)`(String name)`            | Get the party line for the player with the given name.
`public `[`Party`](api-undefined.md#classParty)` `[`getParty`](#group__globalFunctions_1ga3fa567c623c83fe382918a7c6fb49978)`(uint32_t playerId)`            | Get the party line for the player with the given player id.
`public `[`Party`](api-undefined.md#classParty)` `[`getParty`](#group__globalFunctions_1gab98faccffab8b30337ba357504c145c3)`(`[`Unit`](api-undefined.md#classUnit)` player)`            | Get the party line that corresponds to the given unit.
`public `[`PresetUnit`](api-undefined.md#classPresetUnit)` `[`getPresetUnit`](#group__globalFunctions_1ga6bf8c5a903fcf00dcd2504e8f4dc4ff7)`(uint32_t levelId,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClassId)`            | Get the first [PresetUnit](api-undefined.md#classPresetUnit) of the given type and class id.
`public `[`PresetUnit`](api-undefined.md#classPresetUnit)` `[`getPresetUnits`](#group__globalFunctions_1gaf77d2fb8bcab572d328c5764155be78d)`(uint32_t levelId,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClassId)`            | Get an array of [PresetUnit](api-undefined.md#classPresetUnit) s of the given type and class id.
`public `[`Area`](api-undefined.md#classArea)` `[`getArea`](#group__globalFunctions_1ga096676595eb6e9e2361dffe28acd8397)`()`            | Get the [Area](api-undefined.md#classArea) where the controlled unit currently resides.
`public `[`Area`](api-undefined.md#classArea)` `[`getArea`](#group__globalFunctions_1gae59e910620c20fb4fae45fc06d7cc351)`(int32_t nArea)`            | Get the [Area](api-undefined.md#classArea) for area ID nArea.
`public String `[`getBaseStat`](#group__globalFunctions_1gab4ebba6bce777cb9705e199af1d08bc8)`(String szTableName,int32_t nClassId,String szStatName)`            | Get the base stat from the given table with the given class ID and stat name.
`public String `[`getBaseStat`](#group__globalFunctions_1ga79338ba3a14fe002f38d987fed2809b3)`(int32_t nBaseStat,int32_t nClassId,String szStatName)`            | Get the base stat from the given table with the given class ID and stat name.
`public String `[`getBaseStat`](#group__globalFunctions_1gac86c8437c691e21b5593552ab9def9ba)`(String szTableName,int32_t nClassId,int32_t nStat)`            | Get the base stat from the given table with the given class ID and stat ID.
`public String `[`getBaseStat`](#group__globalFunctions_1gafcfdd2f8d3eb3a2c30436ddfc4add78b)`(int32_t nBaseStat,int32_t nClassId,int32_t nStat)`            | Get the base stat from the given table with the given class ID and stat ID.
`public `[`Control`](api-undefined.md#classControl)` `[`getControl`](#group__globalFunctions_1gaad0e54fb02bc1ce440b96204167da80f)`(int32_t nType,int32_t nX,int32_t nY,int32_t nXSize,int32_t nYSize)`            | Get the control specified by type, location and size.
`public bool `[`getPlayerFlag`](#group__globalFunctions_1gaa18d78f3e5bb312f53b602247ec66fd3)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nFirstUnitId,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSecondUnitId,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nFlag)`            | Get the relation between two units.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getTickCount`](#group__globalFunctions_1gad6eff12ded45cc505954f4763a71eae3)`()`            | Get the tick count.
`public `[`Unit`](api-undefined.md#classUnit)` `[`getInteractedNPC`](#group__globalFunctions_1ga3338c7af7db3773f41edb61bf9c5873c)`()`            | Get the [Unit](api-undefined.md#classUnit) that the controlled [Unit](api-undefined.md#classUnit) is currently interacting with.
`public void `[`print`](#group__globalFunctions_1ga428513e838de3670e09b242cde1f0f6b)`(...)`            | Print the String representation of the arguments to the console.
`public void `[`delay`](#group__globalFunctions_1ga95cd2552eeef0300ab5bae0ee284f82d)`(uint32_t nDelay)`            | Delay for nDelay milliseconds.
`public `[`D2BSScript`](api-undefined.md#classD2BSScript)` `[`load`](#group__globalFunctions_1gabb55e1126cb1e7626356bd529f6bc965)`(String file,...)`            | Load file and create a thread with it's main function.
`public bool `[`isIncluded`](#group__globalFunctions_1gae9d2eb16bc4dc333da24e3d968897f67)`(String file)`            | Determine whether a file has been included yet or not.
`public bool `[`include`](#group__globalFunctions_1ga41df84bb09ce63ef47fd30ddf980294b)`(String file)`            | Include file from the scriptDir\libs directory.
`public void `[`stop`](#group__globalFunctions_1ga8c8dfb6d9bcdee82b208da3033068b81)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` stop)`            | Conditionally stop current script.
`public void `[`stop`](#group__globalFunctions_1gaaff9311fc25289798786b3c364291a28)`(bool stop)`            | Conditionnaly stop current script.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`rand`](#group__globalFunctions_1ga6cbf7046bc4629083c0d50f6c5ce8843)`(int32_t low,int32_t high)`            | Return a random number between low and high.
`public void `[`copy`](#group__globalFunctions_1gaca5b8f5b2f8d97182bab3979920352e4)`(String txt)`            | Copy txt to clipboard.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sendCopyData`](#group__globalFunctions_1gad4e03d1abafaa3beab0e1cbb90ca8e37)`(String windowClassName,String windowName,int32_t nModeId,String data)`            | Send data to another window by means of the WM_COPYDATA message.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sendCopyData`](#group__globalFunctions_1ga3dc20441410e40f237213140436a68d3)`(HWND hWnd,String dummy,int32_t nModeId,String data)`            | Send data to another window by means of the WM_COPYDATA message.
`public String `[`sendDDE`](#group__globalFunctions_1ga1b7c45afc2b2302e309c1376d3ecf83f)`(int32_t mode,String pszDDEServer,String pszTopic,String pszItem)`            | Send data to a DDE server by means of DdeClientTransaction.
`public bool `[`keystate`](#group__globalFunctions_1ga8758a45d0a7e6bb5c42258ea99e7da07)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` vKey)`            | Get whether or not a key is pressed.
`public void `[`addEventListener`](#group__globalFunctions_1gaef5f2e6f72ff80cc13fd4ab84ab34810)`(String event,Function eventHandler)`            | Add an event handler to the list of listeners for the given event.
`public void `[`removeEventListener`](#group__globalFunctions_1gaee02cb255ac39d16c7035fb1b58c70ed)`(String event,Function eventHandler)`            | Removes a previously added event from the listener list.
`public void `[`clearEvent`](#group__globalFunctions_1ga185f0dafe7fd58fd565b8ce3b460541b)`(String event)`            | Clear the event handler list for given event.
`public void `[`clearAllEvents`](#group__globalFunctions_1ga229f0f1b263c13dc1a2c5bdcb51a5320)`()`            | Clear all event handlers (from all events).
`public bool `[`js_strict`](#group__globalFunctions_1ga7b204d249e4e2d8274bec860070f1be3)`()`            | Get whether or not the JSOPTION_STRICT flag is set.
`public void `[`js_strict`](#group__globalFunctions_1gae9bcfbfe5b3392c7533b960c25720b4f)`(bool setStrictFlag)`            | Set or clear the JSOPTION_STRICT flag.
`public String `[`version`](#group__globalFunctions_1ga8972d7cb64b90764c110de40e134cfbc)`()`            | Get the D2BS version string.
`public void `[`version`](#group__globalFunctions_1ga8e60448ae3ce3cd28e7f438cfa9e11eb)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` a)`            | Print the D2BS version string.
`public void `[`scriptBroadcast`](#group__globalFunctions_1ga2dea3ce2441ba8f7a7e4c5bdf1be7bba)`(...)`            | Broadcast a message to all other scripts.
`public String `[`sqlite_version`](#group__globalFunctions_1ga182b9023c5495a885298b7f981ee8919)`()`            | Get the sqlite version string (from sqlite3_version).
`public double `[`sqlite_memusage`](#group__globalFunctions_1gae497b684eaeacd9196d73700e4d57d52)`()`            | Return the sqlite memory usage.
`public `[`Folder`](api-undefined.md#classFolder)` `[`dopen`](#group__globalFunctions_1ga9a23806a759b9bace15e57adbdb90f91)`(String name)`            | Get the [Folder](api-undefined.md#classFolder) object for the directory scriptPath\name.
`public void `[`debugLog`](#group__globalFunctions_1gacab2f81ca665988be5ca4ceb60503073)`(...)`            | Log the String representation of the arguments.
`public void `[`showConsole`](#group__globalFunctions_1ga084bae5a15c2ac3f27ea93f3a03ca0ce)`()`            | Show the console.
`public void `[`hideConsole`](#group__globalFunctions_1gaaaafa71c8fdd6db81a134ae4aaa355db)`()`            | Hide the console.
`public void `[`login`](#group__globalFunctions_1gaf76b7b46958dabf5e4ee9a492f0ec3fa)`()`            | Loads the default (either from config or copydata or DDE) profile from d2bs.ini and gets to the lobby (for battle.net chars) or into a game (for single player characters).
`public void `[`login`](#group__globalFunctions_1gad9588235f179db8af822d1356337b021)`(String profile)`            | Loads the profile from d2bs.ini and gets to the lobby (for battle.net chars) or into a game (for single player characters).
`public bool `[`selectCharacter`](#group__globalFunctions_1ga5bec5be39d3ffe649ab5a32fa328d680)`(String profile)`            | Select the character from the given profile.
`public void `[`createGame`](#group__globalFunctions_1ga73e647c911a4b4a29fa03498a86873f8)`(String name,String pass,int32_t diff)`            | Create a game with the given name and password in the given difficulty.
`public void `[`joinGame`](#group__globalFunctions_1gae7e03a89a0c5ce69e71e7489b5ff2d28)`(String name,String pass)`            | Join a game with the given name and password.
`public void `[`addProfile`](#group__globalFunctions_1ga198630d3b1155cad54add069502b17a8)`(String profile,String mode,String gateway,String username,String password,String charname,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` spDifficulty)`            | Create a profile with the given profile name, mode, gateway, username, password, character name and single player difficulty.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getLocation`](#group__globalFunctions_1ga21d43545897ce3af3692562593053480)`()`            | Get the current OOG location.
`public void `[`loadMpq`](#group__globalFunctions_1ga9add41a51f249d6a0d6fd3ed51fd7825)`(String path)`            | Load an mpq file.
`public bool `[`submitItem`](#group__globalFunctions_1gaaf6e11417ccd95f45faea57945684689)`()`            | Submit the item on the cursor to the open screen (like the add sockets screen).
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getMouseCoords`](#group__globalFunctions_1gadf9310ea4d054d7013f93e4e8e840af4)`(bool nFlag,bool nReturn)`            | Get the mouse coordinates (in screen or map space) and return as an array.
`public `[`Unit`](api-undefined.md#classUnit)` `[`copyUnit`](#group__globalFunctions_1ga8db0ed764b74081b12b217918f5f2f94)`(`[`Unit`](api-undefined.md#classUnit)` other)`            | Copy the cached data associated with given unit.
`public bool `[`clickMap`](#group__globalFunctions_1gaa5bf89869bc19b084e30faf73fd9b5b3)`(uint16_t nClickType,uint16_t nShift,`[`Unit`](api-undefined.md#classUnit)` toClick)`            | Click on the map with the given click type and possibly shift at the given unit.
`public bool `[`clickMap`](#group__globalFunctions_1ga751d442b1f8e8a2a0f02c3d484d4e43c)`(uint16_t nClickType,bool nShift,`[`Unit`](api-undefined.md#classUnit)` toClick)`            | Click on the map with the given click type and possibly shift at the given unit.
`public bool `[`clickMap`](#group__globalFunctions_1ga192a8f3a562aa9801ccc9e90e48b132d)`(uint16_t nClickType,uint16_t nShift,uint16_t nX,uint16_t nY)`            | Click on the map with the given click type and possibly shift at the given point.
`public bool `[`clickMap`](#group__globalFunctions_1gaf77b0ae23278cf2e0d3ab86c53a38f2d)`(uint16_t nClickType,bool nShift,uint16_t nX,uint16_t nY)`            | Click on the map with the given click type and possibly shift at the given point.
`public bool `[`acceptTrade`](#group__globalFunctions_1ga1d54436fac5efdab779706bb6cce5144)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` action)`            | Get or do something to do with accepting trade.
`public bool `[`acceptTrade`](#group__globalFunctions_1ga2a996039f7583fccf5900a6d6d12dee7)`()`            | Accept a trade if not already accepted, cancel a trade if already accepted.
`public void `[`tradeOk`](#group__globalFunctions_1ga1d2f580b3ec43e5e2d09e0ea3b417154)`()`            | Hit the OK button to open the trade window.
`public object[] `[`getDialogLines`](#group__globalFunctions_1ga337232421eadff983fd70603bc5211c9)`()`            | Get the lines of dialog of whatever you're talking to.
`public void `[`beep`](#group__globalFunctions_1gaa673a64fed7b36fcbbfaa63d92249019)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nBeepId)`            | Beep with beep ID nBeepId.
`public void `[`clickItem`](#group__globalFunctions_1gac5192a4a78c0610586d6878e0503be80)`(`[`Unit`](api-undefined.md#classUnit)` item)`            | Click an item.
`public void `[`clickItem`](#group__globalFunctions_1ga59b940335f9d7a19a6d9294b3cf8959a)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClickType,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nBodyLoc)`            | Click on a body location with a certain click type.
`public void `[`clickItem`](#group__globalFunctions_1ga49309d493f0b9601e12aa4f73db8165e)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClickType,`[`Unit`](api-undefined.md#classUnit)` item)`            | Click on a given item with the given click type.
`public void `[`clickItem`](#group__globalFunctions_1gad906e16da3dc0445fe6babdd9903a3c6)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClickType,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nX,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nY,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nLoc)`            | Click an item location with the given click type.
`public double `[`getDistance`](#group__globalFunctions_1gae31399c1fa4cc70ad1235bfb1790556a)`(`[`Unit`](api-undefined.md#classUnit)` a)`            | Get the euclidean distance from me to a.
`public double `[`getDistance`](#group__globalFunctions_1ga8d30dbe020059f12ee58f99e69c131ec)`(`[`Unit`](api-undefined.md#classUnit)` a,`[`Unit`](api-undefined.md#classUnit)` b)`            | Get the euclidean distance from a to b.
`public double `[`getDistance`](#group__globalFunctions_1gaa79333fe4ec69dc11bffd905431db402)`(`[`Unit`](api-undefined.md#classUnit)` a,int32_t bx,int32_t by)`            | Get the euclidean distance from a to b.
`public double `[`getDistance`](#group__globalFunctions_1ga099a9099c3a32df0346fa40c496964b9)`(int32_t ax,int32_t ay)`            | Get the euclidean distance from me to a.
`public double `[`getDistance`](#group__globalFunctions_1gaf62a14b80beae3219199c0f05c1ea44b)`(int32_t ax,int32_t ay,`[`Unit`](api-undefined.md#classUnit)` b)`            | Get the euclidean distance from a to b.
`public double `[`getDistance`](#group__globalFunctions_1ga5b44bdbe481beae0bd0a5fb322820864)`(int32_t ax,int32_t ay,int32_t bx,int32_t by)`            | Get the euclidean distance from a to b.
`public void `[`gold`](#group__globalFunctions_1ga43cd766ec6751004726dd28e5f5714d7)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nGold,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode)`            | Do something with some gold.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`checkCollision`](#group__globalFunctions_1gacbe9f546980a44ff675f8c5b77d617d3)`(`[`Unit`](api-undefined.md#classUnit)` a,`[`Unit`](api-undefined.md#classUnit)` b,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nBitMask)`            | Check if two units collide.
`public bool `[`playSound`](#group__globalFunctions_1gaa759ea651473dc19c7af1bde87f126c9)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSoundId)`            | Play d2 sound by id.
`public void `[`quit`](#group__globalFunctions_1ga2463a3acef2df4c951ce942a3229e44e)`()`            | Quit the game.
`public void `[`quitGame`](#group__globalFunctions_1gaa5cd0b13e9579fbd9b3f538ebae81d99)`()`            | Quit Diablo II.
`public bool `[`say`](#group__globalFunctions_1ga88ff9ae5c22b23bd4de2a7025c3cf107)`(...)`            | Say the string equivalent of the each of the arguments.
`public bool `[`clickParty`](#group__globalFunctions_1ga40e19c4f23164e0119973be3b66ec581)`(`[`Party`](api-undefined.md#classParty)` player,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode)`            | Click one of the buttons in the party screen for the given player.
`public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`weaponSwitch`](#group__globalFunctions_1gab9c5eb66ccf79108ee26a7f73943d0bc)`(int32_t dummy)`            | Get which weapon switch is being used.
`public void `[`transmute`](#group__globalFunctions_1ga66b26223d5346aaf653562d27cdfe889)`()`            | Hit the transmute button.
`public void `[`useStatPoint`](#group__globalFunctions_1ga895a78a9e6fbafc50cc592a81f891bb6)`(uint16_t statType,uint32_t count)`            | Use a stat point.
`public void `[`useSkillPoint`](#group__globalFunctions_1ga2316220fcf3f65233c46a23881f5702e)`(uint16_t skill,uint32_t count)`            | Use a skill point.
`public void `[`takeScreenshot`](#group__globalFunctions_1gab872a4402833e45312ccdde4004b4f96)`()`            | Take a screenshot.
`public Object `[`screenToAutomap`](#group__globalFunctions_1ga252bace45245bc8c4794f27d31f8ca45)`(Object arg)`            | Convert a point from screen coordinates to automap coordinates.
`public Object `[`screenToAutomap`](#group__globalFunctions_1gadb899fcbf6b0520f61c6ac2134b7bddd)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` ix,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` iy)`            | Convert a point from screen coordinates to automap coordinates.
`public Object `[`automapToScreen`](#group__globalFunctions_1ga8430f6eb530edcbdc6518f0449235cae)`(Object arg)`            | Convert a point from automap coordinates to screen coordinates.
`public Object `[`automapToScreen`](#group__globalFunctions_1ga12b95062f34ffb0b121981df69f6de66)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` ix,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` iy)`            | Convert a point from automap coordinates to screen coordinates.
`public String `[`md5`](#group__globalFunctions_1ga5aefa76b292174617e0020a21484ddc3)`(String str)`            | Takes the md5 hash.
`public String `[`sha1`](#group__globalFunctions_1gab3300abd7aaa5487c52f78452e32926b)`(String str)`            | Takes the sha1 hash.
`public String `[`sha256`](#group__globalFunctions_1gacbf583814bf77aa15bf6b10be1bc2921)`(String str)`            | Takes the sha256 hash.
`public String `[`sha384`](#group__globalFunctions_1ga16efc8fdeb82a91dde92253fd4f81f6b)`(String str)`            | Takes the sha384 hash.
`public String `[`sha512`](#group__globalFunctions_1gafe6cf810a65b58a3685657dfde830367)`(String str)`            | Takes the sha512 hash.
`public String `[`md5_file`](#group__globalFunctions_1ga84736bab060acfa890403db4fff9e25f)`(String file)`            | Take the md5 hash of a file.
`public String `[`sha1_file`](#group__globalFunctions_1ga2a0768372027c28a64fcb0780f7ff47b)`(String file)`            | Take the sha1 hash of a file.
`public String `[`sha256_file`](#group__globalFunctions_1gacd44b56a400b27db81deb0edd542a81e)`(String file)`            | Take the sha256 hash of a file.
`public String `[`sha384_file`](#group__globalFunctions_1gaec5638f75198f07622c214371a2bbef7)`(String file)`            | Take the sha384 hash of a file.
`public String `[`sha512_file`](#group__globalFunctions_1gad562af84fe5dd55bf5d5172861b2a28f)`(String file)`            | Take the sha512 hash of a file.

## Members

#### `public `[`Unit`](api-undefined.md#classUnit)` `[`getUnit`](#group__globalFunctions_1gab92645722228c1b850c56a97a331e64e)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` type,String name,uint32_t mode,uint32_t nUnitId)` {#group__globalFunctions_1gab92645722228c1b850c56a97a331e64e}

Get a unit by type, name, mode and nUnitId.

#### Parameters
* `type` The type of the unit. Set to -1 to get any unit. 100 gets the cursor item, 101 gets the selected unit.

* `name` The name of the unit to look for.

* `mode` Either the mode being searched for, or a bitmask with bit 29 set and bits 0-28 corresponding to modes of units being searched for.

* `nUnitId` The unique id of the unit.

#### Returns
The first unit found that matches the description.

#### `public `[`Unit`](api-undefined.md#classUnit)` `[`getUnit`](#group__globalFunctions_1ga00d41e69e334872da0d57a9406de86df)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` type,uint32_t classId,uint32_t mode,uint32_t nUnitId)` {#group__globalFunctions_1ga00d41e69e334872da0d57a9406de86df}

Get a unit by type, classId, mode and nUnitId.

#### Parameters
* `type` The type of the unit. Set to -1 to get any unit. 100 gets the cursor item, 101 gets the selected unit.

* `classId` The class id of the unit.

* `mode` Either the mode being searched for, or a bitmask with bit 29 set and bits 0-28 corresponding to modes of units being searched for.

* `nUnitId` The unique id of the unit.

#### Returns
The first unit found that matches the description.

#### `public object[] `[`getPath`](#group__globalFunctions_1ga7913f6338480cc180c015198b6c18024)`(uint32_t Area,uint32_t srcX,uint32_t srcY,uint32_t dstX,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dstY,uint32_t reductionType,uint32_t Radius)` {#group__globalFunctions_1ga7913f6338480cc180c015198b6c18024}

Creates a path (walking or teleporting) from the source to the destination.

Returns an array of points that form a path from the source to the destination. Takes [Area](api-undefined.md#classArea) ID(s), source and destination points, walking or teleporting and range as parameters.

#### Parameters
* `[Area](api-undefined.md#classArea)` The [Area](api-undefined.md#classArea) ID to path through.

* `srcX` The source X coordinate.

* `srcY` The source Y coordinate.

* `dstX` The destination X coordinate.

* `dstY` The destination Y coordinate.

* `reductionType` The type of reduction: {0 - walking, 1 - teleport, 2 - none}

* `Radius` The distance between each point.

#### Returns
The path as an array of objects with x and y properties.

#### `public object[] `[`getPath`](#group__globalFunctions_1ga051897c1e76c0ceeccd946dbedc6ea54)`(uint32_t Area,uint32_t srcX,uint32_t srcY,uint32_t dstX,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dstY,uint32_t reductionType,uint32_t Radius,bool(*)(int32_t x, int32_t y) reject,bool(*)(object curPt, `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac) i, object[] pts)` reduce,int32_t(*)(int32_t x, int32_t y) mutate)` {#group__globalFunctions_1ga051897c1e76c0ceeccd946dbedc6ea54}

Creates a path (walking or teleporting) from the source to the destination.

Returns an array of points that form a path from the source to the destination. Takes [Area](api-undefined.md#classArea) ID, source and destination points, walking or teleporting, range and reduction or not as parameters.

#### Parameters
* `[Area](api-undefined.md#classArea)` The [Area](api-undefined.md#classArea) ID to path through.

* `srcX` The source X coordinate.

* `srcY` The source Y coordinate.

* `dstX` The destination X coordinate.

* `dstY` The destination Y coordinate.

* `reductionType` The type of reduction: {0 - walking, 1 - teleport, 2 - none, 3 - user specified}

* `Radius` The distance between each point.

* `reject` Called on start and end to determine if point is valid.

* `reduce` Function to determine whether to keep point. Returns true if point should be kept, false if point should be eliminated.

* `mutate` Called on the start/end if it isn't/is rejected respectively. This is done before path generation.

#### Returns
The path as an array of objects with x and y properties.

#### `public unsigned short `[`getCollision`](#group__globalFunctions_1gac3a89f2d8c4940ae49dce43fbe2f626b)`(uint32_t nLevelId,int32_t nX,int32_t nY)` {#group__globalFunctions_1gac3a89f2d8c4940ae49dce43fbe2f626b}

Get the collision flags at a given point in a given area.

#### Parameters
* `nLevelId` The level id of the area in question.

* `nX` The x coordinate of the point in question.

* `nY` The y coordinate of the point in question.

#### Returns
The collision flags. For details see: [http://forums.d2botnet.org/viewtopic.php?f=18&t=1212](http://forums.d2botnet.org/viewtopic.php?f=18&t=1212) .

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getMercHP`](#group__globalFunctions_1gac4217ed30da8eb07d8addca4cdb51a9d)`()` {#group__globalFunctions_1gac4217ed30da8eb07d8addca4cdb51a9d}

Get the health points of the controlled unit's merc.

#### Returns
The health points.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getCursorType`](#group__globalFunctions_1gaa0bc4f7877d6992600202b8dce442787)`()` {#group__globalFunctions_1gaa0bc4f7877d6992600202b8dce442787}

Get the cursor type from p_D2CLIENT_RegularCursorType.

> Todo: Determine what the return value means.

#### Returns
The regular cursor type.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getCursorType`](#group__globalFunctions_1ga9b3530843295a8ee8fa59a3130ae7409)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType)` {#group__globalFunctions_1ga9b3530843295a8ee8fa59a3130ae7409}

Get the cursor type from p_D2CLIENT_RegularCursorType if nType != 1, from p_D2CLIENT_ShopCursorType if nType == 1.

#### Parameters
* `nType` What type of cursor to get. 1 - ShopCursorType, other - RegularCursorType.

> Todo: Determine what the return value means.

#### Returns
The cursor type.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkillByName`](#group__globalFunctions_1gaee860cd7482aff8e89519314a0f86955)`(String skillName)` {#group__globalFunctions_1gaee860cd7482aff8e89519314a0f86955}

Get skill ID by name.

#### Parameters
* `skillName` The skill name.

#### Returns
The skill ID.

#### `public String `[`getSkillById`](#group__globalFunctions_1ga14cda78dea3cf554c8ebeeb0834039c9)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` skillId)` {#group__globalFunctions_1ga14cda78dea3cf554c8ebeeb0834039c9}

Get skill name by ID.

#### Parameters
* `skillId` The skill ID.

#### Returns
The skill name.

#### `public String `[`getLocaleString`](#group__globalFunctions_1gaf2065d798cd6a0337fb94f7bae718283)`(uint16_t localeId)` {#group__globalFunctions_1gaf2065d798cd6a0337fb94f7bae718283}

Get the String in the current locale that corresponds to the given id.

#### Parameters
* `localeId` The id of the String.

#### Returns
The String in the current locale.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getTextSize`](#group__globalFunctions_1ga19d918388535584b388c00c57d76ab47)`(String string,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` font,bool asObject)` {#group__globalFunctions_1ga19d918388535584b388c00c57d76ab47}

Get the width and height of the given text in the given font.

#### Parameters
* `string` The string to get the size of.

* `font` The font to use.

* `asObject` False to return as an array.

#### Returns
The width and height of the text. 0 - width, 1 - height.

#### Parameters
* `string` The string to get the size of.

* `font` The font to use.

* `asObject` True to return as an object.

#### Returns
The width and height of the text. Has properties .width and .height.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getThreadPriority`](#group__globalFunctions_1ga6ab5869695c97ce6e4fbc6899e16a75d)`()` {#group__globalFunctions_1ga6ab5869695c97ce6e4fbc6899e16a75d}

Get the priority of the current thread.

#### Returns
The priority.

#### `public bool `[`getUIFlag`](#group__globalFunctions_1gac259c30bc648650e021f45f1c020e412)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nUIId)` {#group__globalFunctions_1gac259c30bc648650e021f45f1c020e412}

Get whether or not a UI flag is set.

> Todo: Get a reference for the UI IDs.

#### Parameters
* `nUIId` The ID of the UI in question.

#### Returns
Whether or not the flag is set.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getTradeInfo`](#group__globalFunctions_1gaedebe009d3f6c0afeab5cb544f430767)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode)` {#group__globalFunctions_1gaedebe009d3f6c0afeab5cb544f430767}

Get the TradeFlag or RecentTradeId.

Get the RecentTradeName.

> Todo: Determine what this means.

#### Parameters
* `nMode` What to return. 0 - TradeFlag, 2 - RecentTradeId.

#### Returns
The TradeFlag or RecentTradeId.

Currently broken, returns null.

> Todo: Determine what these are.

#### Parameters
* `nMode` What to return. 1 - RecentTradeName.

#### Returns
The RecentTradeName.

#### `public bool `[`getWaypoint`](#group__globalFunctions_1ga4561d06e77835b04e0794758844bd987)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nWaypointId)` {#group__globalFunctions_1ga4561d06e77835b04e0794758844bd987}

Get whether the controlled unit has the given waypoint.

#### Parameters
* `nWaypointId` The area id of the waypoint in question.

#### Returns
Whether or not the controlled unit has the waypoint.

#### `public `[`D2BSScript`](api-undefined.md#classD2BSScript)` `[`getScript`](#group__globalFunctions_1ga8340268c49de1e5f34588c01b0cf971d)`(bool currentScript)` {#group__globalFunctions_1ga8340268c49de1e5f34588c01b0cf971d}

Get the current or first context.

#### Parameters
* `currentScript` Whether to get the current script (true) or the first (false).

#### Returns
A [D2BSScript](api-undefined.md#classD2BSScript) object for the request script.

#### `public `[`D2BSScript`](api-undefined.md#classD2BSScript)` `[`getScript`](#group__globalFunctions_1ga02ad0d69faff60c7061a98a3e8a2b53b)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` threadId)` {#group__globalFunctions_1ga02ad0d69faff60c7061a98a3e8a2b53b}

Get a script by thread id.

#### Parameters
* `threadId` The thread id of the script to get.

#### Returns
A [D2BSScript](api-undefined.md#classD2BSScript) object for the script from the given thread.

#### `public `[`D2BSScript`](api-undefined.md#classD2BSScript)` `[`getScript`](#group__globalFunctions_1gac202e144c149fa59378fd01585e6a2bd)`(String name)` {#group__globalFunctions_1gac202e144c149fa59378fd01585e6a2bd}

Get a script by filename.

#### Parameters
* `name` The filename of the script to find.

#### Returns
A [D2BSScript](api-undefined.md#classD2BSScript) object for the script.

#### `public `[`D2BSScript`](api-undefined.md#classD2BSScript)` `[`getScript`](#group__globalFunctions_1ga822bdc4cbce00ca342a05bc29ffae76e)`()` {#group__globalFunctions_1ga822bdc4cbce00ca342a05bc29ffae76e}

Get the first script.

#### Returns
A [D2BSScript](api-undefined.md#classD2BSScript) representing the first script in the runtime.

#### `public `[`Room`](api-undefined.md#classRoom)` `[`getRoom`](#group__globalFunctions_1ga0ec5e4d9e09bf924c1f96ce417290417)`(uint32_t levelId)` {#group__globalFunctions_1ga0ec5e4d9e09bf924c1f96ce417290417}

Get the first room in area given by level id.

#### Parameters
* `levelId` The id of the area to get the room from, or 0 to get the room the controlled unit is in.

#### Returns
The first room in the area.

#### `public `[`Room`](api-undefined.md#classRoom)` `[`getRoom`](#group__globalFunctions_1ga6c10567ae9eac427ef0770edb2ab8c21)`(uint32_t levelId,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y)` {#group__globalFunctions_1ga6c10567ae9eac427ef0770edb2ab8c21}

Get the room that the given point is in from the given level id.

#### Parameters
* `levelId` The level id to look in.

* `x` The x coordinate to find a room for.

* `y` The y coordinate to find a room for.

#### Returns
The room at the given point.

#### `public `[`Room`](api-undefined.md#classRoom)` `[`getRoom`](#group__globalFunctions_1gacc763e01907b73ca5c405469cc58cf12)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y)` {#group__globalFunctions_1gacc763e01907b73ca5c405469cc58cf12}

Get the room that the given point is in.

#### Parameters
* `x` The x coordinate to find a room for.

* `y` The y coordinate to find a room for.

#### Returns
The room at the given point.

#### `public `[`Room`](api-undefined.md#classRoom)` `[`getRoom`](#group__globalFunctions_1gafc051829ad79986ed98043fd46bd9a2c)`()` {#group__globalFunctions_1gafc051829ad79986ed98043fd46bd9a2c}

Get the first room in the current area.

#### Returns
The first room in the current area.

#### `public `[`Party`](api-undefined.md#classParty)` `[`getParty`](#group__globalFunctions_1gae1a5223caa888f3cc2429fad719fc7eb)`()` {#group__globalFunctions_1gae1a5223caa888f3cc2429fad719fc7eb}

Get the first party.

#### Returns
The first party.

#### `public `[`Party`](api-undefined.md#classParty)` `[`getParty`](#group__globalFunctions_1ga6a0dc4f8e9bd582b1c8c4fc4da5e2f47)`(String name)` {#group__globalFunctions_1ga6a0dc4f8e9bd582b1c8c4fc4da5e2f47}

Get the party line for the player with the given name.

#### Parameters
* `name` The name of the player to search for

#### Returns
The party line

#### `public `[`Party`](api-undefined.md#classParty)` `[`getParty`](#group__globalFunctions_1ga3fa567c623c83fe382918a7c6fb49978)`(uint32_t playerId)` {#group__globalFunctions_1ga3fa567c623c83fe382918a7c6fb49978}

Get the party line for the player with the given player id.

#### Parameters
* `playerId` 

#### Returns
The party line

#### `public `[`Party`](api-undefined.md#classParty)` `[`getParty`](#group__globalFunctions_1gab98faccffab8b30337ba357504c145c3)`(`[`Unit`](api-undefined.md#classUnit)` player)` {#group__globalFunctions_1gab98faccffab8b30337ba357504c145c3}

Get the party line that corresponds to the given unit.

#### Parameters
* `player` [Unit](api-undefined.md#classUnit)

#### Returns
The party line

#### `public `[`PresetUnit`](api-undefined.md#classPresetUnit)` `[`getPresetUnit`](#group__globalFunctions_1ga6bf8c5a903fcf00dcd2504e8f4dc4ff7)`(uint32_t levelId,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClassId)` {#group__globalFunctions_1ga6bf8c5a903fcf00dcd2504e8f4dc4ff7}

Get the first [PresetUnit](api-undefined.md#classPresetUnit) of the given type and class id.

#### Parameters
* `levelId` The area id of the level to look for a [PresetUnit](api-undefined.md#classPresetUnit) in.

* `nType` The type of the [PresetUnit](api-undefined.md#classPresetUnit). See getUnit for type codes.

* `nClassId` The class id to find. See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=986](http://forums.d2botnet.org/viewtopic.php?f=18&t=986) and [http://forums.d2botnet.org/viewtopic.php?f=18&t=985](http://forums.d2botnet.org/viewtopic.php?f=18&t=985) .

#### Returns
The first [PresetUnit](api-undefined.md#classPresetUnit) found of type nType and class ID nClassId.

#### `public `[`PresetUnit`](api-undefined.md#classPresetUnit)` `[`getPresetUnits`](#group__globalFunctions_1gaf77d2fb8bcab572d328c5764155be78d)`(uint32_t levelId,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClassId)` {#group__globalFunctions_1gaf77d2fb8bcab572d328c5764155be78d}

Get an array of [PresetUnit](api-undefined.md#classPresetUnit) s of the given type and class id.

#### Parameters
* `levelId` The area id of the level to look for [PresetUnit](api-undefined.md#classPresetUnit) s in.

* `nType` The type of the [PresetUnit](api-undefined.md#classPresetUnit). See getUnit for type codes.

* `nClassId` The class id to find. See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=986](http://forums.d2botnet.org/viewtopic.php?f=18&t=986) and [http://forums.d2botnet.org/viewtopic.php?f=18&t=985](http://forums.d2botnet.org/viewtopic.php?f=18&t=985) .

#### Returns
An array of [PresetUnit](api-undefined.md#classPresetUnit) s found of type nType and class ID nClassId.

#### `public `[`Area`](api-undefined.md#classArea)` `[`getArea`](#group__globalFunctions_1ga096676595eb6e9e2361dffe28acd8397)`()` {#group__globalFunctions_1ga096676595eb6e9e2361dffe28acd8397}

Get the [Area](api-undefined.md#classArea) where the controlled unit currently resides.

#### Returns
An [Area](api-undefined.md#classArea) object for the current object.

#### `public `[`Area`](api-undefined.md#classArea)` `[`getArea`](#group__globalFunctions_1gae59e910620c20fb4fae45fc06d7cc351)`(int32_t nArea)` {#group__globalFunctions_1gae59e910620c20fb4fae45fc06d7cc351}

Get the [Area](api-undefined.md#classArea) for area ID nArea.

#### Parameters
* `nArea` The area ID.

#### Returns
An [Area](api-undefined.md#classArea) object.

#### `public String `[`getBaseStat`](#group__globalFunctions_1gab4ebba6bce777cb9705e199af1d08bc8)`(String szTableName,int32_t nClassId,String szStatName)` {#group__globalFunctions_1gab4ebba6bce777cb9705e199af1d08bc8}

Get the base stat from the given table with the given class ID and stat name.

#### Parameters
* `szTableName` The name of the table to look in.

* `nClassId` The class ID of the ...

* `szStatName` The stat name.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `szTableName` The name of the table to look in.

* `nClassId` The class ID of the ...

* `szStatName` The stat name.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `szTableName` The name of the table to look in.

* `nClassId` The class ID of the ...

* `szStatName` The stat name.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `szTableName` The name of the table to look in.

* `nClassId` The class ID of the ...

* `szStatName` The stat name.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### `public String `[`getBaseStat`](#group__globalFunctions_1ga79338ba3a14fe002f38d987fed2809b3)`(int32_t nBaseStat,int32_t nClassId,String szStatName)` {#group__globalFunctions_1ga79338ba3a14fe002f38d987fed2809b3}

Get the base stat from the given table with the given class ID and stat name.

#### Parameters
* `nBaseStat` The stat to look up.

* `nClassId` The class ID of the ...

* `szStatName` The stat name.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `nBaseStat` The stat to look up.

* `nClassId` The class ID of the ...

* `szStatName` The stat name.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `nBaseStat` The stat to look up.

* `nClassId` The class ID of the ...

* `szStatName` The stat name.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `nBaseStat` The stat to look up.

* `nClassId` The class ID of the ...

* `szStatName` The stat name.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### `public String `[`getBaseStat`](#group__globalFunctions_1gac86c8437c691e21b5593552ab9def9ba)`(String szTableName,int32_t nClassId,int32_t nStat)` {#group__globalFunctions_1gac86c8437c691e21b5593552ab9def9ba}

Get the base stat from the given table with the given class ID and stat ID.

#### Parameters
* `szTableName` The name of the table to look in.

* `nClassId` The class ID of the ...

* `nStat` The stat ID.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `szTableName` The name of the table to look in.

* `nClassId` The class ID of the ...

* `nStat` The stat ID.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `szTableName` The name of the table to look in.

* `nClassId` The class ID of the ...

* `nStat` The stat ID.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `szTableName` The name of the table to look in.

* `nClassId` The class ID of the ...

* `nStat` The stat ID.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### `public String `[`getBaseStat`](#group__globalFunctions_1gafcfdd2f8d3eb3a2c30436ddfc4add78b)`(int32_t nBaseStat,int32_t nClassId,int32_t nStat)` {#group__globalFunctions_1gafcfdd2f8d3eb3a2c30436ddfc4add78b}

Get the base stat from the given table with the given class ID and stat ID.

#### Parameters
* `nBaseStat` The stat to look up.

* `nClassId` The class ID of the ...

* `nStat` The stat ID.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `nBaseStat` The stat to look up.

* `nClassId` The class ID of the ...

* `nStat` The stat ID.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `nBaseStat` The stat to look up.

* `nClassId` The class ID of the ...

* `nStat` The stat ID.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### Parameters
* `nBaseStat` The stat to look up.

* `nClassId` The class ID of the ...

* `nStat` The stat ID.

> Todo: Determine what these tables are.

#### Returns
The stat.

#### `public `[`Control`](api-undefined.md#classControl)` `[`getControl`](#group__globalFunctions_1gaad0e54fb02bc1ce440b96204167da80f)`(int32_t nType,int32_t nX,int32_t nY,int32_t nXSize,int32_t nYSize)` {#group__globalFunctions_1gaad0e54fb02bc1ce440b96204167da80f}

Get the control specified by type, location and size.

-1 indicates parameter not to be matched against.

#### Parameters
* `nType` The type of control (button, text box, etc.)

* `nX` The x coordinate of the control of the control to find.

* `nY` The y coordinate of the control of the control to find.

* `nXSize` The width of the control.

* `nYSize` The height of the control.

> Todo: Get a reference for nType

#### Returns
A [Control](api-undefined.md#classControl) object representing the [Control](api-undefined.md#classControl) found.

#### `public bool `[`getPlayerFlag`](#group__globalFunctions_1gaa18d78f3e5bb312f53b602247ec66fd3)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nFirstUnitId,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSecondUnitId,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nFlag)` {#group__globalFunctions_1gaa18d78f3e5bb312f53b602247ec66fd3}

Get the relation between two units.

#### Parameters
* `nFirstUnitId` The unit id for the unit making the relationship.

* `nSecondUnitId` The unit id for the unit receiving the relationship.

* `nFlag` The relationship.

> Todo: Determine what the flags are.

> Todo: Should this return bool instead of int? (i.e. change the d2bs code).

#### Returns
Whether or not the relationship is of the type specified.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getTickCount`](#group__globalFunctions_1gad6eff12ded45cc505954f4763a71eae3)`()` {#group__globalFunctions_1gad6eff12ded45cc505954f4763a71eae3}

Get the tick count.

Returns GetTickCount().

#### Returns
The tick count.

#### `public `[`Unit`](api-undefined.md#classUnit)` `[`getInteractedNPC`](#group__globalFunctions_1ga3338c7af7db3773f41edb61bf9c5873c)`()` {#group__globalFunctions_1ga3338c7af7db3773f41edb61bf9c5873c}

Get the [Unit](api-undefined.md#classUnit) that the controlled [Unit](api-undefined.md#classUnit) is currently interacting with.

#### Returns
The [Unit](api-undefined.md#classUnit) currently being interacted with.

#### `public void `[`print`](#group__globalFunctions_1ga428513e838de3670e09b242cde1f0f6b)`(...)` {#group__globalFunctions_1ga428513e838de3670e09b242cde1f0f6b}

Print the String representation of the arguments to the console.

#### `public void `[`delay`](#group__globalFunctions_1ga95cd2552eeef0300ab5bae0ee284f82d)`(uint32_t nDelay)` {#group__globalFunctions_1ga95cd2552eeef0300ab5bae0ee284f82d}

Delay for nDelay milliseconds.

This is done by suspending the context, sleeping, then resuming the context for short (<50 ms) delays. For longer delays the context is suspended, 50ms are slept away, the context is resumed, sequence repeats until time slept is greater then nDelay ms.

#### Parameters
* `nDelay` Milliseconds to sleep.

#### `public `[`D2BSScript`](api-undefined.md#classD2BSScript)` `[`load`](#group__globalFunctions_1gabb55e1126cb1e7626356bd529f6bc965)`(String file,...)` {#group__globalFunctions_1gabb55e1126cb1e7626356bd529f6bc965}

Load file and create a thread with it's main function.

[File](api-undefined.md#classFile) taken from scriptDir\file. All remaining parameters are passed to the script.

#### Parameters
* `file` The filename of the script.

#### Returns
If successful returns the new script object representing the thread of the thread. Otherwise it returns null.

#### `public bool `[`isIncluded`](#group__globalFunctions_1gae9d2eb16bc4dc333da24e3d968897f67)`(String file)` {#group__globalFunctions_1gae9d2eb16bc4dc333da24e3d968897f67}

Determine whether a file has been included yet or not.

[File](api-undefined.md#classFile) taken from scriptDir\libs\file

#### Parameters
* `file` Filename of the file that might have been included.

#### Returns
Whether or not the file has been included.

#### `public bool `[`include`](#group__globalFunctions_1ga41df84bb09ce63ef47fd30ddf980294b)`(String file)` {#group__globalFunctions_1ga41df84bb09ce63ef47fd30ddf980294b}

Include file from the scriptDir\libs directory.

#### Parameters
* `file` Filename of the file to include.

#### Returns
Whether the inclusion was successful.

#### `public void `[`stop`](#group__globalFunctions_1ga8c8dfb6d9bcdee82b208da3033068b81)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` stop)` {#group__globalFunctions_1ga8c8dfb6d9bcdee82b208da3033068b81}

Conditionally stop current script.

#### Parameters
* `stop` 1 if current script should be stopped.

#### `public void `[`stop`](#group__globalFunctions_1gaaff9311fc25289798786b3c364291a28)`(bool stop)` {#group__globalFunctions_1gaaff9311fc25289798786b3c364291a28}

Conditionnaly stop current script.

#### Parameters
* `stop` True if current script should be stopped.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`rand`](#group__globalFunctions_1ga6cbf7046bc4629083c0d50f6c5ce8843)`(int32_t low,int32_t high)` {#group__globalFunctions_1ga6cbf7046bc4629083c0d50f6c5ce8843}

Return a random number between low and high.

Uses C [rand()](api-undefined.md#group__globalFunctions_1ga6cbf7046bc4629083c0d50f6c5ce8843) when out of game, and D2GAME_D2Rand with the game seed while in game.

#### Parameters
* `low` The lowest possible integer to return.

* `high` The highest possible integer to return.

#### Returns
A random integer in the range [low,high].

#### `public void `[`copy`](#group__globalFunctions_1gaca5b8f5b2f8d97182bab3979920352e4)`(String txt)` {#group__globalFunctions_1gaca5b8f5b2f8d97182bab3979920352e4}

Copy txt to clipboard.

#### Parameters
* `txt` [Text](api-undefined.md#classText) to copy to the clipboard.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sendCopyData`](#group__globalFunctions_1gad4e03d1abafaa3beab0e1cbb90ca8e37)`(String windowClassName,String windowName,int32_t nModeId,String data)` {#group__globalFunctions_1gad4e03d1abafaa3beab0e1cbb90ca8e37}

Send data to another window by means of the WM_COPYDATA message.

Uses FindWindow to get the HWND and SendMessage to send the message.

#### Parameters
* `windowClassName` The class name of the receiving window.

* `windowName` The window name of the receiving window.

* `nModeId` Data to be sent as the dwData member of the copy data.

* `data` Data to be send as the lpData member of the copy data.

#### Returns
The result of SendMessage.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sendCopyData`](#group__globalFunctions_1ga3dc20441410e40f237213140436a68d3)`(HWND hWnd,String dummy,int32_t nModeId,String data)` {#group__globalFunctions_1ga3dc20441410e40f237213140436a68d3}

Send data to another window by means of the WM_COPYDATA message.

Uses SendMessage to send the message to hWnd.

#### Parameters
* `hWnd` The handle to the receiving window.

* `dummy` Ignored.

* `nModeId` Data to be sent as the dwData member of the copy data.

* `data` Data to be send as the lpData member of the copy data.

#### Returns
The result of SendMessage.

#### `public String `[`sendDDE`](#group__globalFunctions_1ga1b7c45afc2b2302e309c1376d3ecf83f)`(int32_t mode,String pszDDEServer,String pszTopic,String pszItem)` {#group__globalFunctions_1ga1b7c45afc2b2302e309c1376d3ecf83f}

Send data to a DDE server by means of DdeClientTransaction.

#### Parameters
* `mode` The mode of transaction to use.

0 - Do command given by pszItem with an XTYP_REQUEST and get the resulting data.

1 - Do command given by pszItem with an XTYP_POKE sending ""

2 - Do command with an XTYP_EXECUTE sending ""

#### Parameters
* `pszDDEServer` The service name of the DDE server to connect to.

* `pszTopic` The topic with which to start the connection.

* `pszItem` Data to be sent.

#### Returns
Result data if mode was 0.

#### `public bool `[`keystate`](#group__globalFunctions_1ga8758a45d0a7e6bb5c42258ea99e7da07)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` vKey)` {#group__globalFunctions_1ga8758a45d0a7e6bb5c42258ea99e7da07}

Get whether or not a key is pressed.

Returns the value of GetAsyncKeyState.

#### Parameters
* `vKey` The virtual key code for the key in question. See: [http://msdn.microsoft.com/en-us/library/dd375731%28v=VS.85%29.aspx](http://msdn.microsoft.com/en-us/library/dd375731%28v=VS.85%29.aspx)

#### Returns
Whether not the key is pressed.

#### `public void `[`addEventListener`](#group__globalFunctions_1gaef5f2e6f72ff80cc13fd4ab84ab34810)`(String event,Function eventHandler)` {#group__globalFunctions_1gaef5f2e6f72ff80cc13fd4ab84ab34810}

Add an event handler to the list of listeners for the given event.

#### Parameters
* `event` The name of the event. Can be:

melife (uint32_t dwLife)

memana (uint32_t dwMana)

keyup (uint32_t key)

keydown (uint32_t key)

bool keyupblock (uint32_t key) - Returns true to block event from Diablo II

bool keydownblock (uint32_t key) - Returns true to block event from Diablo II

playerassign (uint32_t unitId)

mouseclick (uint32_t button, uint32_t x, uint32_t y, bool bUp)

mousemove (uint32_t x, uint32_t y)

scriptmsg (...)

golddrop (uint32_t gId, uint32_t Mode)

chatmsg (String lpszNick, String lpszMsg)

bool chatmsgblocker (String lpszNick, String lpszMsg) - Returns true to block event from Diablo II

whispermsg (String lpszNick, String lpszMsg)

bool whispermsgblocker (String lpszNick, String lpszMsg) - Returns true to block event from Diablo II

copydata (int32_t dwMode, String lpszMsg)

itemaction (uint32_t gId, uint32_t mode, String code, Bool global)

gameevent (BYTE mode, DWORD param1, DWORD param2, String name1, String name2)

From [http://www.blizzhackers.cc/viewtopic.php?t=392307](http://www.blizzhackers.cc/viewtopic.php?t=392307) Dark_Mage-

mode:

0x00 - "%Name1(%Name2) dropped due to time out." 0x01 - "%Name1(%Name2) dropped due to errors." 0x02 - "%Name1(%Name2) joined our world. Diablo's minions grow stronger." 0x03 - "%Name1(%Name2) left our world. Diablo's minions weaken." 0x04 - "%Name1 is not in the game." 0x05 - "%Name1 is not logged in."

0x06 - "%Name1 was Slain by %Name2" BYTE Param2 = [Unit](api-undefined.md#classUnit) Type of Slayer (0x00 = Player, 0x01 = NPC) if Type = Player, Name2 = Slayer Character Name & DWORD Param1 = Slayer Character Type if Type = NPC, DWORD Param1 = Monster Id Code from MPQ (points to string for Name2) if Type = NPC & Monster is Unique, Name2 = Unique Monster Id

0x07 - Player Relations (Bottom Left [Text](api-undefined.md#classText)) DWORD Param1 = Player Id Player Id = Pointer to Character Name BYTE Param2 = Action Taken Actions: 0x01 - "%Player permits you to loot his corpse." 0x02 - "%Player permits you to loot her corpse." 0x03 - "%Player has declared hostility towards you." 0x04 - "%Player is no longer hostile towards you." 0x05 - "%Player invites you to ally against the forces of evil." 0x06 - "%Player has canceled party invite." 0x07 - "%Player has joined your party to fight the forces of evil." 0x08 - "You are now allied with %Player." 0x09 - "%Player has left your party." 0x0a - "%Player no longer allows you to access his corpse." 0x0b - "%Player no longer allows you to access her corpse."

0x08 - "%Name1 is busy." 0x09 - "You must wait a short time to trade with that player."

0x0a - "%Name1 has items in his box." if Name1 = 0x00, "You have items in your box."

0x0b - <Unknown> 0x0c - <Unknown> 0x0d - "%Name1 is not listening to you." 0x0e - Received on 'Not enough mana' speech. 0x0f - "Realm going down in %Param1 minutes." 0x10 - "You must wait a short time to declare hostility with that player." 0x11 - "%Param1 Stones of Jordan Sold to Merchants" 0x12 - "Diablo Walks the Earth"

#### Parameters
* `eventHandler` A function with the signature listed above that handles the event.

#### `public void `[`removeEventListener`](#group__globalFunctions_1gaee02cb255ac39d16c7035fb1b58c70ed)`(String event,Function eventHandler)` {#group__globalFunctions_1gaee02cb255ac39d16c7035fb1b58c70ed}

Removes a previously added event from the listener list.

#### Parameters
* `event` The event name (the one used to add the event).

* `eventHandler` The handler to remove.

#### `public void `[`clearEvent`](#group__globalFunctions_1ga185f0dafe7fd58fd565b8ce3b460541b)`(String event)` {#group__globalFunctions_1ga185f0dafe7fd58fd565b8ce3b460541b}

Clear the event handler list for given event.

#### Parameters
* `event` The name of the event to clear the handler list for.

#### `public void `[`clearAllEvents`](#group__globalFunctions_1ga229f0f1b263c13dc1a2c5bdcb51a5320)`()` {#group__globalFunctions_1ga229f0f1b263c13dc1a2c5bdcb51a5320}

Clear all event handlers (from all events).

#### `public bool `[`js_strict`](#group__globalFunctions_1ga7b204d249e4e2d8274bec860070f1be3)`()` {#group__globalFunctions_1ga7b204d249e4e2d8274bec860070f1be3}

Get whether or not the JSOPTION_STRICT flag is set.

#### Returns
Whether or not the strict flag is set.

#### `public void `[`js_strict`](#group__globalFunctions_1gae9bcfbfe5b3392c7533b960c25720b4f)`(bool setStrictFlag)` {#group__globalFunctions_1gae9bcfbfe5b3392c7533b960c25720b4f}

Set or clear the JSOPTION_STRICT flag.

#### Parameters
* `setStrictFlag` The new JSOPTION_STRICT state.

#### `public String `[`version`](#group__globalFunctions_1ga8972d7cb64b90764c110de40e134cfbc)`()` {#group__globalFunctions_1ga8972d7cb64b90764c110de40e134cfbc}

Get the D2BS version string.

#### Returns
The D2BS version string.

#### `public void `[`version`](#group__globalFunctions_1ga8e60448ae3ce3cd28e7f438cfa9e11eb)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` a)` {#group__globalFunctions_1ga8e60448ae3ce3cd28e7f438cfa9e11eb}

Print the D2BS version string.

#### `public void `[`scriptBroadcast`](#group__globalFunctions_1ga2dea3ce2441ba8f7a7e4c5bdf1be7bba)`(...)` {#group__globalFunctions_1ga2dea3ce2441ba8f7a7e4c5bdf1be7bba}

Broadcast a message to all other scripts.

D2BS calls each scripts scriptmsg event listeners with the messages passed in.

#### `public String `[`sqlite_version`](#group__globalFunctions_1ga182b9023c5495a885298b7f981ee8919)`()` {#group__globalFunctions_1ga182b9023c5495a885298b7f981ee8919}

Get the sqlite version string (from sqlite3_version).

#### Returns
The sqlite version string.

#### `public double `[`sqlite_memusage`](#group__globalFunctions_1gae497b684eaeacd9196d73700e4d57d52)`()` {#group__globalFunctions_1gae497b684eaeacd9196d73700e4d57d52}

Return the sqlite memory usage.

#### `public `[`Folder`](api-undefined.md#classFolder)` `[`dopen`](#group__globalFunctions_1ga9a23806a759b9bace15e57adbdb90f91)`(String name)` {#group__globalFunctions_1ga9a23806a759b9bace15e57adbdb90f91}

Get the [Folder](api-undefined.md#classFolder) object for the directory scriptPath\name.

#### Parameters
* `name` The name of the [Folder](api-undefined.md#classFolder) to open.

#### Returns
A [Folder](api-undefined.md#classFolder) object representing the [Folder](api-undefined.md#classFolder) name.

#### `public void `[`debugLog`](#group__globalFunctions_1gacab2f81ca665988be5ca4ceb60503073)`(...)` {#group__globalFunctions_1gacab2f81ca665988be5ca4ceb60503073}

Log the String representation of the arguments.

#### `public void `[`showConsole`](#group__globalFunctions_1ga084bae5a15c2ac3f27ea93f3a03ca0ce)`()` {#group__globalFunctions_1ga084bae5a15c2ac3f27ea93f3a03ca0ce}

Show the console.

#### `public void `[`hideConsole`](#group__globalFunctions_1gaaaafa71c8fdd6db81a134ae4aaa355db)`()` {#group__globalFunctions_1gaaaafa71c8fdd6db81a134ae4aaa355db}

Hide the console.

#### `public void `[`login`](#group__globalFunctions_1gaf76b7b46958dabf5e4ee9a492f0ec3fa)`()` {#group__globalFunctions_1gaf76b7b46958dabf5e4ee9a492f0ec3fa}

Loads the default (either from config or copydata or DDE) profile from d2bs.ini and gets to the lobby (for battle.net chars) or into a game (for single player characters).

#### Exceptions
* `String` May throw one of the following:

"invalid character name" - If it fails to select the character.

"Failed to click the Single button?" - If it fails to click the single player button.

"Failed to click the 'Battle.net' button?" - If it fails to click the battle.net button.

"Failed to click the 'Other Multiplayer' button?" - If it fails to click the Other Multiplayer button.

"Failed to click the 'Open Battle.net' button?" - If it fails to click the Open battle.net button.

"Failed to click the 'TCP/IP' button?" - If it fails to click the TCP/IP button.

"Failed to click the 'Host Game' button?" - If it fails to click the Host Game (TCP/IP) button.

"Failed to click the 'Join Game' button?" - If it fails to click the Join Game (TCP/IP) button.

"Failed to click the OK button" - If it fails to click the OK button (TCP/IP enter IP address).

"Failed to find the 'Host IP Address' text-edit box." - If it can't find the host IP address (TCP/IP) text box.

"Could not get the IP address from the profile in the d2bs.ini file." - If the user failed to specify the IP address in the d2bs.ini file.

"Failed to click the exit button?" - If it is login and fails to click the exit button.

"Failed to set the 'Username' text-edit box.' - If it can't find the username control.

"Failed to set the 'Password' text-edit box." - If it can't find the password control.

"Failed to click the 'Log in' button?" - If it can't click the login button.

"Failed to click the 'Normal Difficulty' button?" - If it can't click the normal button in single player game creation.

"Failed to click the 'Nightmare Difficulty' button?" - If it can't click the nightmare button in single player game creation.

"Failed to click the 'Hell Difficulty' button?" - If it can't click the hell button in single player game creation.

"Invalid single player difficulty level specified!" - If the difficulty level is invalid.

"Unable to connect" - If the unable to connect screen is shown.

"CD-Key in use" - If the cdkey in use screen is shown.

"Bad account or password" - If the username/password wrong screen is shown.

"Realm Down" - If the realm down message is shown.

"Unhandled login location" - If the game is in an unsupported location.

#### `public void `[`login`](#group__globalFunctions_1gad9588235f179db8af822d1356337b021)`(String profile)` {#group__globalFunctions_1gad9588235f179db8af822d1356337b021}

Loads the profile from d2bs.ini and gets to the lobby (for battle.net chars) or into a game (for single player characters).

#### Parameters
* `profile` The profile to load.

#### Exceptions
* `String` May throw one of the following:

"invalid character name" - If it fails to select the character.

"Failed to click the Single button?" - If it fails to click the single player button.

"Failed to click the 'Battle.net' button?" - If it fails to click the battle.net button.

"Failed to click the 'Other Multiplayer' button?" - If it fails to click the Other Multiplayer button.

"Failed to click the 'Open Battle.net' button?" - If it fails to click the Open battle.net button.

"Failed to click the exit button?" - If it is login and fails to click the exit button.

"Failed to set the 'Username' text-edit box.' - If it can't find the username control.

"Failed to set the 'Password' text-edit box." - If it can't find the password control.

"Failed to click the 'Log in' button?" - If it can't click the login button.

"Failed to click the 'Normal Difficulty' button?" - If it can't click the normal button in single player game creation.

"Failed to click the 'Nightmare Difficulty' button?" - If it can't click the nightmare button in single player game creation.

"Failed to click the 'Hell Difficulty' button?" - If it can't click the hell button in single player game creation.

"Invalid single player difficulty level specified!" - If the difficulty level is invalid.

"Unable to connect" - If the unable to connect screen is shown.

"CD-Key in use" - If the cdkey in use screen is shown.

"Bad account or password" - If the username/password wrong screen is shown.

"Realm Down" - If the realm down message is shown.

"Unhandled login location" - If the game is in an unsupported location.

#### `public bool `[`selectCharacter`](#group__globalFunctions_1ga5bec5be39d3ffe649ab5a32fa328d680)`(String profile)` {#group__globalFunctions_1ga5bec5be39d3ffe649ab5a32fa328d680}

Select the character from the given profile.

Keeps all details except the character name from old profile.

#### Parameters
* `profile` The profile to get the character name from.

#### Returns
Whether or not character swap was successful.

#### `public void `[`createGame`](#group__globalFunctions_1ga73e647c911a4b4a29fa03498a86873f8)`(String name,String pass,int32_t diff)` {#group__globalFunctions_1ga73e647c911a4b4a29fa03498a86873f8}

Create a game with the given name and password in the given difficulty.

#### Parameters
* `name` The game name.

* `pass` The game password.

* `diff` The game difficulty. 0 - normal, 1 - nightmare, 2 - hell, 3 - hardest difficulty available.

#### `public void `[`joinGame`](#group__globalFunctions_1gae7e03a89a0c5ce69e71e7489b5ff2d28)`(String name,String pass)` {#group__globalFunctions_1gae7e03a89a0c5ce69e71e7489b5ff2d28}

Join a game with the given name and password.

#### Parameters
* `name` The game name.

* `pass` The game password.

#### `public void `[`addProfile`](#group__globalFunctions_1ga198630d3b1155cad54add069502b17a8)`(String profile,String mode,String gateway,String username,String password,String charname,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` spDifficulty)` {#group__globalFunctions_1ga198630d3b1155cad54add069502b17a8}

Create a profile with the given profile name, mode, gateway, username, password, character name and single player difficulty.

#### Parameters
* `profile` The profile name.

* `mode` The mode (single player/battle.net/etc).

* `gateway` The realm gateway.

* `username` Account username.

* `password` Account password.

* `charname` Character name (case sensitive).

* `spDifficulty` The difficulty to create games for a single player character.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getLocation`](#group__globalFunctions_1ga21d43545897ce3af3692562593053480)`()` {#group__globalFunctions_1ga21d43545897ce3af3692562593053480}

Get the current OOG location.

> Todo: Create a reference for the return values.

#### Returns
The current OOG location.

#### `public void `[`loadMpq`](#group__globalFunctions_1ga9add41a51f249d6a0d6fd3ed51fd7825)`(String path)` {#group__globalFunctions_1ga9add41a51f249d6a0d6fd3ed51fd7825}

Load an mpq file.

#### Parameters
* `path` The mpq file to load

#### `public bool `[`submitItem`](#group__globalFunctions_1gaaf6e11417ccd95f45faea57945684689)`()` {#group__globalFunctions_1gaaf6e11417ccd95f45faea57945684689}

Submit the item on the cursor to the open screen (like the add sockets screen).

#### Returns
Whether or not it was successful.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getMouseCoords`](#group__globalFunctions_1gadf9310ea4d054d7013f93e4e8e840af4)`(bool nFlag,bool nReturn)` {#group__globalFunctions_1gadf9310ea4d054d7013f93e4e8e840af4}

Get the mouse coordinates (in screen or map space) and return as an array.

Get the mouse coordinates (in screen or map space) and return as an Object.

#### Parameters
* `nFlag` Whether to return in map space (true) or screen space (false).

* `nReturn` Whether to return as an array or as an Object, false for array format.

#### Returns
The mouse coordinates in an array. 0 - x, 1 - y.

#### Parameters
* `nFlag` Whether to return in map space (true) or screen space (false).

* `nReturn` Whether to return as an array or as an Object, true for Object format.

#### Returns
The mouse coordinates in an array. Has properties .x and .y.

#### `public `[`Unit`](api-undefined.md#classUnit)` `[`copyUnit`](#group__globalFunctions_1ga8db0ed764b74081b12b217918f5f2f94)`(`[`Unit`](api-undefined.md#classUnit)` other)` {#group__globalFunctions_1ga8db0ed764b74081b12b217918f5f2f94}

Copy the cached data associated with given unit.

This is things like type and unit id.

> Todo: Figure out why anyone would want to copy a unit.

#### Returns
The new copy of the unit.

#### `public bool `[`clickMap`](#group__globalFunctions_1gaa5bf89869bc19b084e30faf73fd9b5b3)`(uint16_t nClickType,uint16_t nShift,`[`Unit`](api-undefined.md#classUnit)` toClick)` {#group__globalFunctions_1gaa5bf89869bc19b084e30faf73fd9b5b3}

Click on the map with the given click type and possibly shift at the given unit.

#### Parameters
* `nClickType` The click type to do.

* `nShift` Whether or not to be holding down shift. 0 - Don't hold shift, 1 - hold shift.

* `toClick` The unit to click on.

> Todo: Get a reference for nClickType.

#### Returns
Whether or not the click was successful.

#### `public bool `[`clickMap`](#group__globalFunctions_1ga751d442b1f8e8a2a0f02c3d484d4e43c)`(uint16_t nClickType,bool nShift,`[`Unit`](api-undefined.md#classUnit)` toClick)` {#group__globalFunctions_1ga751d442b1f8e8a2a0f02c3d484d4e43c}

Click on the map with the given click type and possibly shift at the given unit.

#### Parameters
* `nClickType` The click type to do.

* `nShift` Whether or not to be holding down shift.

* `toClick` The unit to click on.

> Todo: Get a reference for nClickType.

#### Returns
Whether or not the click was successful.

#### `public bool `[`clickMap`](#group__globalFunctions_1ga192a8f3a562aa9801ccc9e90e48b132d)`(uint16_t nClickType,uint16_t nShift,uint16_t nX,uint16_t nY)` {#group__globalFunctions_1ga192a8f3a562aa9801ccc9e90e48b132d}

Click on the map with the given click type and possibly shift at the given point.

#### Parameters
* `nClickType` The click type to do.

* `nShift` Whether or not to be holding down shift. 0 - Don't hold shift, 1 - hold shift.

* `nX` The x coordinate to click at.

* `nY` The y coordinate to click at.

> Todo: Get a reference for nClickType.

#### Returns
Whether or not the click was successful.

#### `public bool `[`clickMap`](#group__globalFunctions_1gaf77b0ae23278cf2e0d3ab86c53a38f2d)`(uint16_t nClickType,bool nShift,uint16_t nX,uint16_t nY)` {#group__globalFunctions_1gaf77b0ae23278cf2e0d3ab86c53a38f2d}

Click on the map with the given click type and possibly shift at the given point.

#### Parameters
* `nClickType` The click type to do.

* `nShift` Whether or not to be holding down shift.

* `nX` The x coordinate to click at.

* `nY` The y coordinate to click at.

> Todo: Get a reference for nClickType.

#### Returns
Whether or not the click was successful.

#### `public bool `[`acceptTrade`](#group__globalFunctions_1ga1d54436fac5efdab779706bb6cce5144)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` action)` {#group__globalFunctions_1ga1d54436fac5efdab779706bb6cce5144}

Get or do something to do with accepting trade.

#### Parameters
* `action` What action to perform.

1 - Get whether trade we've accepted trade already or not.

2 - Get the trade flag ...

3 - Get whether the check is red or not.

#### Returns
The flag specified by action.

#### `public bool `[`acceptTrade`](#group__globalFunctions_1ga2a996039f7583fccf5900a6d6d12dee7)`()` {#group__globalFunctions_1ga2a996039f7583fccf5900a6d6d12dee7}

Accept a trade if not already accepted, cancel a trade if already accepted.

> Todo: Verify that I understand this correctly.

#### Returns
Whether or not trade was accepted.

#### `public void `[`tradeOk`](#group__globalFunctions_1ga1d2f580b3ec43e5e2d09e0ea3b417154)`()` {#group__globalFunctions_1ga1d2f580b3ec43e5e2d09e0ea3b417154}

Hit the OK button to open the trade window.

Throws an error if client not in a proper state to click ok.

#### `public object[] `[`getDialogLines`](#group__globalFunctions_1ga337232421eadff983fd70603bc5211c9)`()` {#group__globalFunctions_1ga337232421eadff983fd70603bc5211c9}

Get the lines of dialog of whatever you're talking to.

Each object has a text property which gives the text and a selectable property which is a boolean as to whether you can click on that line or not.

#### Returns
An array of objects of the lines, or undefined if no dialog up.

#### `public void `[`beep`](#group__globalFunctions_1gaa673a64fed7b36fcbbfaa63d92249019)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nBeepId)` {#group__globalFunctions_1gaa673a64fed7b36fcbbfaa63d92249019}

Beep with beep ID nBeepId.

#### Parameters
* `nBeepId` ID of the beep to make. See: [http://msdn.microsoft.com/en-us/library/ms680356%28VS.85%29.aspx](http://msdn.microsoft.com/en-us/library/ms680356%28VS.85%29.aspx) .

#### `public void `[`clickItem`](#group__globalFunctions_1gac5192a4a78c0610586d6878e0503be80)`(`[`Unit`](api-undefined.md#classUnit)` item)` {#group__globalFunctions_1gac5192a4a78c0610586d6878e0503be80}

Click an item.

#### Parameters
* `item` The item to click on.

#### `public void `[`clickItem`](#group__globalFunctions_1ga59b940335f9d7a19a6d9294b3cf8959a)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClickType,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nBodyLoc)` {#group__globalFunctions_1ga59b940335f9d7a19a6d9294b3cf8959a}

Click on a body location with a certain click type.

#### Parameters
* `nClickType` The click type. {0 - left click, 4 - left click merc body locations}

* `nBodyLoc` The body location.

0 - Not equipped

1 - Helmet

2 - Amulet

3 - Armor

4 - Right hand slot 1

5 - Left hand slot 1

6 - Right ring

7 - Left ring

8 - Belt

9 - Boots

10 - Gloves

11 - Right hand slot 2

12 - Left hand slot 2

#### `public void `[`clickItem`](#group__globalFunctions_1ga49309d493f0b9601e12aa4f73db8165e)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClickType,`[`Unit`](api-undefined.md#classUnit)` item)` {#group__globalFunctions_1ga49309d493f0b9601e12aa4f73db8165e}

Click on a given item with the given click type.

#### Parameters
* `nClickType` The click type. {0 - left click, 1 - right click, 4 - left click merc location}

* `item` The item to click.

* `nClickType`

#### `public void `[`clickItem`](#group__globalFunctions_1gad906e16da3dc0445fe6babdd9903a3c6)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClickType,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nX,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nY,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nLoc)` {#group__globalFunctions_1gad906e16da3dc0445fe6babdd9903a3c6}

Click an item location with the given click type.

#### Parameters
* `nClickType` The click type. {0 - left click, 1 - right click, 2 - shift left click, 4 - left click merc location}

* `nX` The x coordinate of the location to click.

* `nY` The y coordinate of the location to click.

* `nLoc` The game location of the item.

2 - Belt

3 - Inventory

4 - Player trade

6 - Cube

7 - Stash

#### `public double `[`getDistance`](#group__globalFunctions_1gae31399c1fa4cc70ad1235bfb1790556a)`(`[`Unit`](api-undefined.md#classUnit)` a)` {#group__globalFunctions_1gae31399c1fa4cc70ad1235bfb1790556a}

Get the euclidean distance from me to a.

#### Parameters
* `a` The second [Unit](api-undefined.md#classUnit).

#### Returns
The euclidean distance from a.

#### `public double `[`getDistance`](#group__globalFunctions_1ga8d30dbe020059f12ee58f99e69c131ec)`(`[`Unit`](api-undefined.md#classUnit)` a,`[`Unit`](api-undefined.md#classUnit)` b)` {#group__globalFunctions_1ga8d30dbe020059f12ee58f99e69c131ec}

Get the euclidean distance from a to b.

#### Parameters
* `a` The first [Unit](api-undefined.md#classUnit).

* `b` The second [Unit](api-undefined.md#classUnit).

#### Returns
The euclidean distance from a to b.

#### `public double `[`getDistance`](#group__globalFunctions_1gaa79333fe4ec69dc11bffd905431db402)`(`[`Unit`](api-undefined.md#classUnit)` a,int32_t bx,int32_t by)` {#group__globalFunctions_1gaa79333fe4ec69dc11bffd905431db402}

Get the euclidean distance from a to b.

#### Parameters
* `a` The first [Unit](api-undefined.md#classUnit).

* `bx` The x coordinate of point b.

* `by` The y coordinate of point b.

#### Returns
The euclidean distance from a to b.

#### `public double `[`getDistance`](#group__globalFunctions_1ga099a9099c3a32df0346fa40c496964b9)`(int32_t ax,int32_t ay)` {#group__globalFunctions_1ga099a9099c3a32df0346fa40c496964b9}

Get the euclidean distance from me to a.

#### Parameters
* `ax` The x coordinate of point a.

* `ay` The y coordinate of point a.

#### Returns
The euclidean distance from me to a.

#### `public double `[`getDistance`](#group__globalFunctions_1gaf62a14b80beae3219199c0f05c1ea44b)`(int32_t ax,int32_t ay,`[`Unit`](api-undefined.md#classUnit)` b)` {#group__globalFunctions_1gaf62a14b80beae3219199c0f05c1ea44b}

Get the euclidean distance from a to b.

#### Parameters
* `ax` The x coordinate of point a.

* `ay` The y coordinate of point a.

* `b` The second [Unit](api-undefined.md#classUnit).

#### Returns
The euclidean distance from a to b.

#### `public double `[`getDistance`](#group__globalFunctions_1ga5b44bdbe481beae0bd0a5fb322820864)`(int32_t ax,int32_t ay,int32_t bx,int32_t by)` {#group__globalFunctions_1ga5b44bdbe481beae0bd0a5fb322820864}

Get the euclidean distance from a to b.

#### Parameters
* `ax` The x coordinate of point a.

* `ay` The y coordinate of point a.

* `bx` The x coordinate of point b.

* `by` The y coordinate of point b.

#### Returns
The euclidean distance from a to b.

#### `public void `[`gold`](#group__globalFunctions_1ga43cd766ec6751004726dd28e5f5714d7)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nGold,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode)` {#group__globalFunctions_1ga43cd766ec6751004726dd28e5f5714d7}

Do something with some gold.

> Todo: Determine what the values for nMode are.

#### Parameters
* `nGold` The amount of gold to move around.

* `nMode` What to do with the gold.

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`checkCollision`](#group__globalFunctions_1gacbe9f546980a44ff675f8c5b77d617d3)`(`[`Unit`](api-undefined.md#classUnit)` a,`[`Unit`](api-undefined.md#classUnit)` b,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nBitMask)` {#group__globalFunctions_1gacbe9f546980a44ff675f8c5b77d617d3}

Check if two units collide.

#### Parameters
* `a` [Unit](api-undefined.md#classUnit) a.

* `b` [Unit](api-undefined.md#classUnit) b.

* `nBitMask` Bit mask to check collision of a and b with.

#### `public bool `[`playSound`](#group__globalFunctions_1gaa759ea651473dc19c7af1bde87f126c9)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSoundId)` {#group__globalFunctions_1gaa759ea651473dc19c7af1bde87f126c9}

Play d2 sound by id.

#### Returns
true

#### `public void `[`quit`](#group__globalFunctions_1ga2463a3acef2df4c951ce942a3229e44e)`()` {#group__globalFunctions_1ga2463a3acef2df4c951ce942a3229e44e}

Quit the game.

#### `public void `[`quitGame`](#group__globalFunctions_1gaa5cd0b13e9579fbd9b3f538ebae81d99)`()` {#group__globalFunctions_1gaa5cd0b13e9579fbd9b3f538ebae81d99}

Quit Diablo II.

Allows the core to shutdown, than terminates the process.

#### `public bool `[`say`](#group__globalFunctions_1ga88ff9ae5c22b23bd4de2a7025c3cf107)`(...)` {#group__globalFunctions_1ga88ff9ae5c22b23bd4de2a7025c3cf107}

Say the string equivalent of the each of the arguments.

#### Returns
true if at least one parameter was sent in.

#### `public bool `[`clickParty`](#group__globalFunctions_1ga40e19c4f23164e0119973be3b66ec581)`(`[`Party`](api-undefined.md#classParty)` player,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode)` {#group__globalFunctions_1ga40e19c4f23164e0119973be3b66ec581}

Click one of the buttons in the party screen for the given player.

#### Parameters
* `player` The player who's button you wish to click.

* `nMode` Which button to click.

0 - Allow loot corpse

1 - Hostile player

2 - Join party

3 - Leave party (doesn't matter which party is passed in)

#### `public `[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`weaponSwitch`](#group__globalFunctions_1gab9c5eb66ccf79108ee26a7f73943d0bc)`(int32_t dummy)` {#group__globalFunctions_1gab9c5eb66ccf79108ee26a7f73943d0bc}

Get which weapon switch is being used.

Switch the weapons.

#### Parameters
* `dummy` Any int other than 0.

#### Returns
Which weapon switch is active.

#### Parameters
* `dummy` 0 to use this mode.

#### Returns
true

#### `public void `[`transmute`](#group__globalFunctions_1ga66b26223d5346aaf653562d27cdfe889)`()` {#group__globalFunctions_1ga66b26223d5346aaf653562d27cdfe889}

Hit the transmute button.

#### `public void `[`useStatPoint`](#group__globalFunctions_1ga895a78a9e6fbafc50cc592a81f891bb6)`(uint16_t statType,uint32_t count)` {#group__globalFunctions_1ga895a78a9e6fbafc50cc592a81f891bb6}

Use a stat point.

BE CAREFUL! This function directly sends packets without checks. If you call this function and do not have the points, or specify an invalid stat, you might get flagged/banned.

> Todo: Come up with a reference for the statType values

#### Parameters
* `statType` The type of stat to add the points to

* `count` The number of points to add

#### `public void `[`useSkillPoint`](#group__globalFunctions_1ga2316220fcf3f65233c46a23881f5702e)`(uint16_t skill,uint32_t count)` {#group__globalFunctions_1ga2316220fcf3f65233c46a23881f5702e}

Use a skill point.

BE CAREFUL! This function directly sends packets without checks. If you call this function and do not have the points, or specify an invalid skill, you might get flagged/banned.

> Todo: Come up with a reference for the skill values

#### Parameters
* `skill` The skill to add the points to

* `count` The number points to spend

#### `public void `[`takeScreenshot`](#group__globalFunctions_1gab872a4402833e45312ccdde4004b4f96)`()` {#group__globalFunctions_1gab872a4402833e45312ccdde4004b4f96}

Take a screenshot.

Performs the action that pressing print screen (by default) would do

#### `public Object `[`screenToAutomap`](#group__globalFunctions_1ga252bace45245bc8c4794f27d31f8ca45)`(Object arg)` {#group__globalFunctions_1ga252bace45245bc8c4794f27d31f8ca45}

Convert a point from screen coordinates to automap coordinates.

#### Parameters
* `arg` An object with x and y parameters specifying the point.

#### Returns
An object with x and y, containing the automap coordinate.

#### `public Object `[`screenToAutomap`](#group__globalFunctions_1gadb899fcbf6b0520f61c6ac2134b7bddd)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` ix,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` iy)` {#group__globalFunctions_1gadb899fcbf6b0520f61c6ac2134b7bddd}

Convert a point from screen coordinates to automap coordinates.

#### Parameters
* `ix` The x coordinate.

* `iy` The y coordinate.

#### Returns
An object with x and y, containing the automap coordinate.

#### `public Object `[`automapToScreen`](#group__globalFunctions_1ga8430f6eb530edcbdc6518f0449235cae)`(Object arg)` {#group__globalFunctions_1ga8430f6eb530edcbdc6518f0449235cae}

Convert a point from automap coordinates to screen coordinates.

#### Parameters
* `arg` An object with x and y parameters specifying the point.

#### Returns
An object with x and y, containing the screen coordinate.

#### `public Object `[`automapToScreen`](#group__globalFunctions_1ga12b95062f34ffb0b121981df69f6de66)`(`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` ix,`[`int`](api-undefined.md#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` iy)` {#group__globalFunctions_1ga12b95062f34ffb0b121981df69f6de66}

Convert a point from automap coordinates to screen coordinates.

#### Parameters
* `ix` The x coordinate.

* `iy` The y coordinate.

#### Returns
An object with x and y, containing the screen coordinate.

#### `public String `[`md5`](#group__globalFunctions_1ga5aefa76b292174617e0020a21484ddc3)`(String str)` {#group__globalFunctions_1ga5aefa76b292174617e0020a21484ddc3}

Takes the md5 hash.

#### Parameters
* `str` The string to hash.

#### Returns
The md5 hash of the string.

#### `public String `[`sha1`](#group__globalFunctions_1gab3300abd7aaa5487c52f78452e32926b)`(String str)` {#group__globalFunctions_1gab3300abd7aaa5487c52f78452e32926b}

Takes the sha1 hash.

#### Parameters
* `str` The string to hash.

#### Returns
The sha1 hash of the string.

#### `public String `[`sha256`](#group__globalFunctions_1gacbf583814bf77aa15bf6b10be1bc2921)`(String str)` {#group__globalFunctions_1gacbf583814bf77aa15bf6b10be1bc2921}

Takes the sha256 hash.

#### Parameters
* `str` The string to hash.

#### Returns
The sha256 hash of the string.

#### `public String `[`sha384`](#group__globalFunctions_1ga16efc8fdeb82a91dde92253fd4f81f6b)`(String str)` {#group__globalFunctions_1ga16efc8fdeb82a91dde92253fd4f81f6b}

Takes the sha384 hash.

#### Parameters
* `str` The string to hash.

#### Returns
The sha384 hash of the string.

#### `public String `[`sha512`](#group__globalFunctions_1gafe6cf810a65b58a3685657dfde830367)`(String str)` {#group__globalFunctions_1gafe6cf810a65b58a3685657dfde830367}

Takes the sha512 hash.

#### Parameters
* `str` The string to hash.

#### Returns
The sha512 hash of the string.

#### `public String `[`md5_file`](#group__globalFunctions_1ga84736bab060acfa890403db4fff9e25f)`(String file)` {#group__globalFunctions_1ga84736bab060acfa890403db4fff9e25f}

Take the md5 hash of a file.

#### Parameters
* `file` Filename relative to script path.

#### Returns
The md5 hash of the file.

#### `public String `[`sha1_file`](#group__globalFunctions_1ga2a0768372027c28a64fcb0780f7ff47b)`(String file)` {#group__globalFunctions_1ga2a0768372027c28a64fcb0780f7ff47b}

Take the sha1 hash of a file.

#### Parameters
* `file` Filename relative to script path.

#### Returns
The sha1 hash of the file.

#### `public String `[`sha256_file`](#group__globalFunctions_1gacd44b56a400b27db81deb0edd542a81e)`(String file)` {#group__globalFunctions_1gacd44b56a400b27db81deb0edd542a81e}

Take the sha256 hash of a file.

#### Parameters
* `file` Filename relative to script path.

#### Returns
The sha256 hash of the file.

#### `public String `[`sha384_file`](#group__globalFunctions_1gaec5638f75198f07622c214371a2bbef7)`(String file)` {#group__globalFunctions_1gaec5638f75198f07622c214371a2bbef7}

Take the sha384 hash of a file.

#### Parameters
* `file` Filename relative to script path.

#### Returns
The sha384 hash of the file.

#### `public String `[`sha512_file`](#group__globalFunctions_1gad562af84fe5dd55bf5d5172861b2a28f)`(String file)` {#group__globalFunctions_1gad562af84fe5dd55bf5d5172861b2a28f}

Take the sha512 hash of a file.

#### Parameters
* `file` Filename relative to script path.

#### Returns
The sha512 hash of the file.

