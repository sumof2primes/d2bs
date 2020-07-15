# Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`namespace `[`ProfileType`](#namespaceProfileType) | [ProfileType](#namespaceProfileType) enum.
`class `[`Area`](#classArea) | Represent an [Area](#classArea) of the map.
`class `[`Box`](#classBox) | A [Box](#classBox) screen hook.
`class `[`Control`](#classControl) | This class represents out of game (OOG) [Control](#classControl) s.
`class `[`D2BSScript`](#classD2BSScript) | Represents a script (a thread), created by either loading a file, or typing something in the console.
`class `[`DBStatement`](#classDBStatement) | A class describing ...
`class `[`Exit`](#classExit) | Represents a method of getting from one [Area](#classArea) to another.
`class `[`File`](#classFile) | This class handles the opening, reading and writing of files.
`class `[`FileTools`](#classFileTools) | A collection of tools to do things like move files and determine whether files exist.
`class `[`Folder`](#classFolder) | Represents a folder.
`class `[`Frame`](#classFrame) | This class represents a screen hook for a [Frame](#classFrame).
`class `[`Image`](#classImage) | This class represents a screen hook for a [Image](#classImage).
`class `[`Line`](#classLine) | A 2d line.
`class `[`Me`](#classMe) | The class that represents the controlled unit.
`class `[`Party`](#classParty) | Represents the items in the list in the [Party](#classParty) screen.
`class `[`PresetUnit`](#classPresetUnit) | Represents a [PresetUnit](#classPresetUnit) (a type of [Unit](#classUnit) that is available as soon as the [Area](#classArea) data is available).
`class `[`Profile`](#classProfile) | This class represents the details needed to get a player to a game or lobby.
`class `[`Room`](#classRoom) | Represents a "Room" in the game.
`class `[`Sandbox`](#classSandbox) | A separate context to run scripts in.
`class `[`SQLite`](#classSQLite) | Class for dealing with an [SQLite](#classSQLite) database.
`class `[`Text`](#classText) | A [Text](#classText) screen hook.
`class `[`Unit`](#classUnit) | This class represents a unit (monster, wp, npc, character, etc) in the game.

# namespace `ProfileType` {#namespaceProfileType}

[ProfileType](#namespaceProfileType) enum.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`ProfileType`](#namespaceProfileType_1a52d9eb951de02b75f7ca78be5cfd4f3d)            | 

## Members

#### `enum `[`ProfileType`](#namespaceProfileType_1a52d9eb951de02b75f7ca78be5cfd4f3d) {#namespaceProfileType_1a52d9eb951de02b75f7ca78be5cfd4f3d}

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
singlePlayer            | 
battleNet            | 
openBattleNet            | 
tcpIpHost            | 
tcpIpJoin            | 

# class `Area` {#classArea}

Represent an [Area](#classArea) of the map.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`Exit`](#classExit)` `[`exits`](#classArea_1a56bbc920b4b5ca70d070a8157824a1de) | Get an array of the [Area](#classArea)'s exits.
`public String `[`name`](#classArea_1add56e46cfd14437bb4dc88fa80a5b90c) | The name of the [Area](#classArea).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classArea_1a7b57ea354fbe94f9480d28e07857e4c3) | The x coordinate of the left side of the map.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`xsize`](#classArea_1ac030cf51b89f3c58b1672b84f57d8573) | The x size (width) of the map.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classArea_1adca338a7f47c9e2cba5f8a4b6cb862a5) | The y coordinate of the bottom (smallest y) of the map.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ysize`](#classArea_1ade6c62f10571d7318680fe9e5e28496f) | The y size (height) of the map.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`id`](#classArea_1a7871c593963912cebd55208e71b3d16f) | The area id.

## Members

#### `public `[`Exit`](#classExit)` `[`exits`](#classArea_1a56bbc920b4b5ca70d070a8157824a1de) {#classArea_1a56bbc920b4b5ca70d070a8157824a1de}

Get an array of the [Area](#classArea)'s exits.

This includes arrays where you can walk between two areas and warp [Unit](#classUnit) s.

#### `public String `[`name`](#classArea_1add56e46cfd14437bb4dc88fa80a5b90c) {#classArea_1add56e46cfd14437bb4dc88fa80a5b90c}

The name of the [Area](#classArea).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classArea_1a7b57ea354fbe94f9480d28e07857e4c3) {#classArea_1a7b57ea354fbe94f9480d28e07857e4c3}

The x coordinate of the left side of the map.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`xsize`](#classArea_1ac030cf51b89f3c58b1672b84f57d8573) {#classArea_1ac030cf51b89f3c58b1672b84f57d8573}

The x size (width) of the map.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classArea_1adca338a7f47c9e2cba5f8a4b6cb862a5) {#classArea_1adca338a7f47c9e2cba5f8a4b6cb862a5}

The y coordinate of the bottom (smallest y) of the map.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ysize`](#classArea_1ade6c62f10571d7318680fe9e5e28496f) {#classArea_1ade6c62f10571d7318680fe9e5e28496f}

The y size (height) of the map.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`id`](#classArea_1a7871c593963912cebd55208e71b3d16f) {#classArea_1a7871c593963912cebd55208e71b3d16f}

The area id.

See [Unit::area](#classUnit_1af5f2e11d4f116084ffd807b578078d7d).

# class `Box` {#classBox}

A [Box](#classBox) screen hook.

> Todo: Explain (and understand) this better. 

Verify all the documentation in this class.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classBox_1a180c7a450afc2e8cfe4dddb50eeaa4f2) | The x coordinate (left) of the [Box](#classBox).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classBox_1a1b13c5067471d1052c6f3191f260c785) | The y coordinate (top) of the [Box](#classBox).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`xsize`](#classBox_1a26d7213ca75ae43589b05354efe153d6) | The xsize (width) of the [Box](#classBox).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ysize`](#classBox_1a81988ee738d5c278c72bb1016addd712) | The ysize (height) of the [Box](#classBox).
`public bool `[`visible`](#classBox_1ae2d7733c544cc0ededa905045062a37d) | Whether or not the [Box](#classBox) is visible.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`align`](#classBox_1a1703dbd7e3fdce5b0fd8f9250cc99ade) | The horizontal alignment.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`zorder`](#classBox_1a3f51df7eadec72ac84ca1bede15ea008) | The z-order of the [Box](#classBox) (what it covers up and is covered by).
`public ClickHandler `[`click`](#classBox_1a660b86951ae4edaa3b4f4e93dc682b62) | The click handler that gets called when the [Box](#classBox) is clicked.
`public HoverHandler `[`hover`](#classBox_1aa6504cde7640e62a2a4853677bfe0d5e) | The hover handler that gets called when the [Box](#classBox) gets hovered over.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`color`](#classBox_1aa9c08a5f737f77a0d4a6d61192dadeb6) | The color of the [Box](#classBox).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`opacity`](#classBox_1af39fa1fbcc7398a6334531934f85a878) | How much of the controls underneath the [Box](#classBox) should show through.
`public  `[`Box`](#classBox_1af8e43dea86c924a91316bd0f61099cc3)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` color,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` opacity,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` align,bool automap,ClickHandler click,HoverHandler hover)` | Create a [Box](#classBox) hook with the given parameters.
`public void `[`remove`](#classBox_1a6257b65ed22242f4660d3fa357a5ec5b)`()` | Remove the [Box](#classBox) from the screen and destroy the corresponding object.

## Members

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classBox_1a180c7a450afc2e8cfe4dddb50eeaa4f2) {#classBox_1a180c7a450afc2e8cfe4dddb50eeaa4f2}

The x coordinate (left) of the [Box](#classBox).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classBox_1a1b13c5067471d1052c6f3191f260c785) {#classBox_1a1b13c5067471d1052c6f3191f260c785}

The y coordinate (top) of the [Box](#classBox).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`xsize`](#classBox_1a26d7213ca75ae43589b05354efe153d6) {#classBox_1a26d7213ca75ae43589b05354efe153d6}

The xsize (width) of the [Box](#classBox).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ysize`](#classBox_1a81988ee738d5c278c72bb1016addd712) {#classBox_1a81988ee738d5c278c72bb1016addd712}

The ysize (height) of the [Box](#classBox).

#### `public bool `[`visible`](#classBox_1ae2d7733c544cc0ededa905045062a37d) {#classBox_1ae2d7733c544cc0ededa905045062a37d}

Whether or not the [Box](#classBox) is visible.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`align`](#classBox_1a1703dbd7e3fdce5b0fd8f9250cc99ade) {#classBox_1a1703dbd7e3fdce5b0fd8f9250cc99ade}

The horizontal alignment.

0 - Left

1 - Right

2 - Center

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`zorder`](#classBox_1a3f51df7eadec72ac84ca1bede15ea008) {#classBox_1a3f51df7eadec72ac84ca1bede15ea008}

The z-order of the [Box](#classBox) (what it covers up and is covered by).

#### `public ClickHandler `[`click`](#classBox_1a660b86951ae4edaa3b4f4e93dc682b62) {#classBox_1a660b86951ae4edaa3b4f4e93dc682b62}

The click handler that gets called when the [Box](#classBox) is clicked.

#### `public HoverHandler `[`hover`](#classBox_1aa6504cde7640e62a2a4853677bfe0d5e) {#classBox_1aa6504cde7640e62a2a4853677bfe0d5e}

The hover handler that gets called when the [Box](#classBox) gets hovered over.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`color`](#classBox_1aa9c08a5f737f77a0d4a6d61192dadeb6) {#classBox_1aa9c08a5f737f77a0d4a6d61192dadeb6}

The color of the [Box](#classBox).

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=1000](http://forums.d2botnet.org/viewtopic.php?f=18&t=1000)

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`opacity`](#classBox_1af39fa1fbcc7398a6334531934f85a878) {#classBox_1af39fa1fbcc7398a6334531934f85a878}

How much of the controls underneath the [Box](#classBox) should show through.

#### `public  `[`Box`](#classBox_1af8e43dea86c924a91316bd0f61099cc3)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` color,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` opacity,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` align,bool automap,ClickHandler click,HoverHandler hover)` {#classBox_1af8e43dea86c924a91316bd0f61099cc3}

Create a [Box](#classBox) hook with the given parameters.

#### Parameters
* `x` The x coordinate (left) of the [Box](#classBox).

* `y` The y coordinate (top) of the [Box](#classBox).

* `x2` The xsize (width) of the [Box](#classBox).

* `y2` The ysize (height) of the [Box](#classBox).

* `color` The color of the [Box](#classBox).

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=1000](http://forums.d2botnet.org/viewtopic.php?f=18&t=1000)

#### Parameters
* `opacity` See [Explanation of opacity parameter.](#shook_1opacity)

* `align` The horizontal alignment.

0 - Left

1 - Right

2 - Center

#### Parameters
* `automap` Whether the [Box](#classBox) is in automap coordinate space (true) or screen coordinate space (false).

* `click` The click handler that gets called when the [Box](#classBox) is clicked.

* `hover` The hover handler that gets called when the [Box](#classBox) gets hovered over.

#### `public void `[`remove`](#classBox_1a6257b65ed22242f4660d3fa357a5ec5b)`()` {#classBox_1a6257b65ed22242f4660d3fa357a5ec5b}

Remove the [Box](#classBox) from the screen and destroy the corresponding object.

# class `Control` {#classControl}

This class represents out of game (OOG) [Control](#classControl) s.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public String `[`text`](#classControl_1ad8a40f413495015a31061fbd9438f7b8) | The text of the [Control](#classControl).
`public double `[`x`](#classControl_1ab67c4321deb0a7ab71cc3ab9bfa60cef) | The x coordinate of the [Control](#classControl).
`public double `[`y`](#classControl_1af0d0d577a0b49e54118be2dbb70857c9) | The y coordinate of the [Control](#classControl).
`public double `[`xsize`](#classControl_1a0319dfc08d4f17914371dc93b55d28b1) | The xsize (width) of the [Control](#classControl).
`public double `[`ysize`](#classControl_1afc787bd3d4d6b176b02333ccd662ceea) | The ysize (height) of the [Control](#classControl).
`public double `[`state`](#classControl_1aeb22d5c21c492b4d08e64acc6181f4f7) | The state (?) of the [Control](#classControl).
`public bool `[`password`](#classControl_1aebd2dddca40bfc123cb86b307368e134) | Return whether or not the [Control](#classControl) holds a password (starred out text).
`public double `[`type`](#classControl_1acf59ef5830cbbf3da75babd82f47a93a) | The type of control.
`public double `[`cursorPos`](#classControl_1a46fb8326d65d4a4aef170978e2ce1373) | Something...
`public double `[`selectstart`](#classControl_1acfa6b74b35e85f4b806bed082eade450) | Someting...
`public double `[`selectend`](#classControl_1a435440d08525dcdf317a55d1b96b1086) | Something...
`public double `[`disabled`](#classControl_1a8b89abb5d91642620cc5ffe5173a6619) | Whether the [Control](#classControl) is disabled or not.
`public `[`Control`](#classControl)` `[`getNext`](#classControl_1a4894f8dd6595425524cd468938ed327c)`()` | Gets the next [Control](#classControl) from the linked list.
`public void `[`click`](#classControl_1a399dc8ad5e1e8fb6c4944e448a154c0e)`()` | Click [Control](#classControl) in the center of the [Control](#classControl).
`public void `[`click`](#classControl_1aa6025f9c6027722b94351e24f98c4fa4)`(uint32_t x,uint32_t y)` | Click [Control](#classControl) at the given location.
`public void `[`setText`](#classControl_1a794772a6cde7d2956c68556f5a7065fa)`(String text)` | Set the [Control](#classControl)'s text.
`public String[] `[`getText`](#classControl_1afab7c6e5349104c77cf2f6b91bf1461a)`()` | Get the texts from a label [Control](#classControl).

## Members

#### `public String `[`text`](#classControl_1ad8a40f413495015a31061fbd9438f7b8) {#classControl_1ad8a40f413495015a31061fbd9438f7b8}

The text of the [Control](#classControl).

#### `public double `[`x`](#classControl_1ab67c4321deb0a7ab71cc3ab9bfa60cef) {#classControl_1ab67c4321deb0a7ab71cc3ab9bfa60cef}

The x coordinate of the [Control](#classControl).

#### `public double `[`y`](#classControl_1af0d0d577a0b49e54118be2dbb70857c9) {#classControl_1af0d0d577a0b49e54118be2dbb70857c9}

The y coordinate of the [Control](#classControl).

#### `public double `[`xsize`](#classControl_1a0319dfc08d4f17914371dc93b55d28b1) {#classControl_1a0319dfc08d4f17914371dc93b55d28b1}

The xsize (width) of the [Control](#classControl).

#### `public double `[`ysize`](#classControl_1afc787bd3d4d6b176b02333ccd662ceea) {#classControl_1afc787bd3d4d6b176b02333ccd662ceea}

The ysize (height) of the [Control](#classControl).

#### `public double `[`state`](#classControl_1aeb22d5c21c492b4d08e64acc6181f4f7) {#classControl_1aeb22d5c21c492b4d08e64acc6181f4f7}

The state (?) of the [Control](#classControl).

> Todo: Find a reference for these values.

#### `public bool `[`password`](#classControl_1aebd2dddca40bfc123cb86b307368e134) {#classControl_1aebd2dddca40bfc123cb86b307368e134}

Return whether or not the [Control](#classControl) holds a password (starred out text).

#### `public double `[`type`](#classControl_1acf59ef5830cbbf3da75babd82f47a93a) {#classControl_1acf59ef5830cbbf3da75babd82f47a93a}

The type of control.

1 - TextBox

2 - [Image](#classImage)

3 - Image2

4 - LabelBox

5 - ScrollBar

6 - Button

7 - List

8 - Timer

9 - Smack

10 - ProgressBar

11 - Popup

12 - AccountList

#### `public double `[`cursorPos`](#classControl_1a46fb8326d65d4a4aef170978e2ce1373) {#classControl_1a46fb8326d65d4a4aef170978e2ce1373}

Something...

> Todo: Determine what this is.

#### `public double `[`selectstart`](#classControl_1acfa6b74b35e85f4b806bed082eade450) {#classControl_1acfa6b74b35e85f4b806bed082eade450}

Someting...

> Todo: Determine what this is.

#### `public double `[`selectend`](#classControl_1a435440d08525dcdf317a55d1b96b1086) {#classControl_1a435440d08525dcdf317a55d1b96b1086}

Something...

> Todo: Determine what this is.

#### `public double `[`disabled`](#classControl_1a8b89abb5d91642620cc5ffe5173a6619) {#classControl_1a8b89abb5d91642620cc5ffe5173a6619}

Whether the [Control](#classControl) is disabled or not.

#### `public `[`Control`](#classControl)` `[`getNext`](#classControl_1a4894f8dd6595425524cd468938ed327c)`()` {#classControl_1a4894f8dd6595425524cd468938ed327c}

Gets the next [Control](#classControl) from the linked list.

This is done by finding the old [Control](#classControl) based on type, location and size.

#### `public void `[`click`](#classControl_1a399dc8ad5e1e8fb6c4944e448a154c0e)`()` {#classControl_1a399dc8ad5e1e8fb6c4944e448a154c0e}

Click [Control](#classControl) in the center of the [Control](#classControl).

#### `public void `[`click`](#classControl_1aa6025f9c6027722b94351e24f98c4fa4)`(uint32_t x,uint32_t y)` {#classControl_1aa6025f9c6027722b94351e24f98c4fa4}

Click [Control](#classControl) at the given location.

This is equivalent with clicking at the given location.

#### Parameters
* `x` The x coordinate of the point to click.

* `y` The y coordinate of the point to click.

#### `public void `[`setText`](#classControl_1a794772a6cde7d2956c68556f5a7065fa)`(String text)` {#classControl_1a794772a6cde7d2956c68556f5a7065fa}

Set the [Control](#classControl)'s text.

#### Parameters
* `text` The text to set the [Control](#classControl)'s text field to.

#### `public String[] `[`getText`](#classControl_1afab7c6e5349104c77cf2f6b91bf1461a)`()` {#classControl_1afab7c6e5349104c77cf2f6b91bf1461a}

Get the texts from a label [Control](#classControl).

Only works for labels.

#### Returns
An array of all the [Control](#classControl)'s texts.

# class `D2BSScript` {#classD2BSScript}

Represents a script (a thread), created by either loading a file, or typing something in the console.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public String `[`name`](#classD2BSScript_1ac7b3b72a5f100891f7e194a3cd4dce27) | The relative filename of the script.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`type`](#classD2BSScript_1aee04c264935a168134c967506123d49c) | The type of script.
`public bool `[`running`](#classD2BSScript_1a384dc30cf52c68c260aa77f7ae9d8708) | Whether or not the script is running.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`threadid`](#classD2BSScript_1a85c1a8f5ec4bef0563d07209a1f1d2a1) | The thread id.
`public bool `[`getNext`](#classD2BSScript_1a9f47bf9a5ebd40e20561a133f9594b7b)`()` | Get the next script.
`public void `[`pause`](#classD2BSScript_1af541fc2916b40774e2af4eaf947b0c85)`()` | Pause the script.
`public void `[`resume`](#classD2BSScript_1ae16e135f6467d23dfb8a67582c817485)`()` | Resume the script.
`public void `[`join`](#classD2BSScript_1a943c172af9bbbc4eedecb74653e1d146)`()` | Wait for other script to finish.
`public void `[`stop`](#classD2BSScript_1ab4933bbbe30752c142be6df995226967)`()` | Stop the script.
`public void `[`send`](#classD2BSScript_1ab615c8319b0575b135a8f127a3cf61cf)`(...)` | Send some values to the script.

## Members

#### `public String `[`name`](#classD2BSScript_1ac7b3b72a5f100891f7e194a3cd4dce27) {#classD2BSScript_1ac7b3b72a5f100891f7e194a3cd4dce27}

The relative filename of the script.

If the script is from the console the filename will be reported as "Command Line".

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`type`](#classD2BSScript_1aee04c264935a168134c967506123d49c) {#classD2BSScript_1aee04c264935a168134c967506123d49c}

The type of script.

0 - InGame

1 - OutOfGame or Command

#### `public bool `[`running`](#classD2BSScript_1a384dc30cf52c68c260aa77f7ae9d8708) {#classD2BSScript_1a384dc30cf52c68c260aa77f7ae9d8708}

Whether or not the script is running.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`threadid`](#classD2BSScript_1a85c1a8f5ec4bef0563d07209a1f1d2a1) {#classD2BSScript_1a85c1a8f5ec4bef0563d07209a1f1d2a1}

The thread id.

#### `public bool `[`getNext`](#classD2BSScript_1a9f47bf9a5ebd40e20561a133f9594b7b)`()` {#classD2BSScript_1a9f47bf9a5ebd40e20561a133f9594b7b}

Get the next script.

#### Returns
Whether there was another script or not.

#### `public void `[`pause`](#classD2BSScript_1af541fc2916b40774e2af4eaf947b0c85)`()` {#classD2BSScript_1af541fc2916b40774e2af4eaf947b0c85}

Pause the script.

#### `public void `[`resume`](#classD2BSScript_1ae16e135f6467d23dfb8a67582c817485)`()` {#classD2BSScript_1ae16e135f6467d23dfb8a67582c817485}

Resume the script.

#### `public void `[`join`](#classD2BSScript_1a943c172af9bbbc4eedecb74653e1d146)`()` {#classD2BSScript_1a943c172af9bbbc4eedecb74653e1d146}

Wait for other script to finish.

#### `public void `[`stop`](#classD2BSScript_1ab4933bbbe30752c142be6df995226967)`()` {#classD2BSScript_1ab4933bbbe30752c142be6df995226967}

Stop the script.

#### `public void `[`send`](#classD2BSScript_1ab615c8319b0575b135a8f127a3cf61cf)`(...)` {#classD2BSScript_1ab615c8319b0575b135a8f127a3cf61cf}

Send some values to the script.

Has the effect of calling the any listeners to scriptmsg with the parameters provided.

# class `DBStatement` {#classDBStatement}

A class describing ...

> Todo: Get a better description (and understanding).

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public String `[`sql`](#classDBStatement_1ac1de9e1a1ad1938c08682caac8984dad) | The statement string.
`public bool `[`ready`](#classDBStatement_1a254934b06af2d3a12349add04f338c2e) | Whether or not there is more data to be gotten.
`public Object `[`getObject`](#classDBStatement_1ad4f6860effd1caa57653e8c1fd3dd4c4)`()` | An object with property names from the column names and property values coming from the data.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getColumnCount`](#classDBStatement_1acd872f8af18dccfa9e6a65d0e7451d25)`()` | Get the column count.
`public double `[`getColumnValue`](#classDBStatement_1a186d710e040e011b31ab49add001cdda)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colIndex)` | Get the value from the column specified by index.
`public String `[`getColumnValue`](#classDBStatement_1aa177441f9b780c947e1522a07ffdf666)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colIndex)` | Get the value from the column specified by index.
`public  `[`getColumnName`](#classDBStatement_1a849c6076cb4e5e4a7436aebb3ca7dee7)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colIndex)` | Get the name of the column at the given index.
`public bool `[`go`](#classDBStatement_1a0d92705f6226d3bfea6a1d99d797e7be)`()` | Call sqlite3_step and close_db_stmt on the statement.
`public bool `[`next`](#classDBStatement_1a571c59f80ee8940aaedd2b6f6abc9bd4)`()` | Call sqlite3_step on the statement.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`skip`](#classDBStatement_1a52b6771be336a56bbc8f02bcb99e55c7)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` rows)` | Skip a certain number of rows in the results.
`public bool `[`reset`](#classDBStatement_1a7c08cde3f29a7e5158e4ff290f9c6e25)`()` | Call sqlite3_reset.
`public bool `[`close`](#classDBStatement_1a1d8293b4debace6e99c0dbede2677ee7)`()` | Close the statement.
`public bool `[`bind`](#classDBStatement_1aa7f4478203eaa27a68d33fa18a1ab9b4)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colnum,double val)` | Bind the given data to the given column.
`public bool `[`bind`](#classDBStatement_1a289bdcf455c3d15c1defc949fed8ff8b)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colnum,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` val)` | Bind the given data to the given column.
`public bool `[`bind`](#classDBStatement_1ab817aa527c6c877e4bcc0410080b9b82)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colnum,String val)` | Bind the given data to the given column.
`public bool `[`bind`](#classDBStatement_1a42ddfab63e2f5438e6a971bf96e6cdab)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colnum,bool val)` | Bind the given data to the given column.

## Members

#### `public String `[`sql`](#classDBStatement_1ac1de9e1a1ad1938c08682caac8984dad) {#classDBStatement_1ac1de9e1a1ad1938c08682caac8984dad}

The statement string.

#### `public bool `[`ready`](#classDBStatement_1a254934b06af2d3a12349add04f338c2e) {#classDBStatement_1a254934b06af2d3a12349add04f338c2e}

Whether or not there is more data to be gotten.

#### `public Object `[`getObject`](#classDBStatement_1ad4f6860effd1caa57653e8c1fd3dd4c4)`()` {#classDBStatement_1ad4f6860effd1caa57653e8c1fd3dd4c4}

An object with property names from the column names and property values coming from the data.

#### Returns
The object with all the data.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getColumnCount`](#classDBStatement_1acd872f8af18dccfa9e6a65d0e7451d25)`()` {#classDBStatement_1acd872f8af18dccfa9e6a65d0e7451d25}

Get the column count.

#### Returns
The column count.

#### `public double `[`getColumnValue`](#classDBStatement_1a186d710e040e011b31ab49add001cdda)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colIndex)` {#classDBStatement_1a186d710e040e011b31ab49add001cdda}

Get the value from the column specified by index.

#### Parameters
* `colIndex` The index of the column to get data from.

#### Returns
The data.

#### `public String `[`getColumnValue`](#classDBStatement_1aa177441f9b780c947e1522a07ffdf666)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colIndex)` {#classDBStatement_1aa177441f9b780c947e1522a07ffdf666}

Get the value from the column specified by index.

#### Parameters
* `colIndex` The index of the column to get data from.

#### Returns
The data.

#### `public  `[`getColumnName`](#classDBStatement_1a849c6076cb4e5e4a7436aebb3ca7dee7)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colIndex)` {#classDBStatement_1a849c6076cb4e5e4a7436aebb3ca7dee7}

Get the name of the column at the given index.

#### Parameters
* `colIndex` The index of the column to get data from.

#### Returns
The column name.

#### `public bool `[`go`](#classDBStatement_1a0d92705f6226d3bfea6a1d99d797e7be)`()` {#classDBStatement_1a0d92705f6226d3bfea6a1d99d797e7be}

Call sqlite3_step and close_db_stmt on the statement.

> Todo: Interpret what this means.

#### Returns
Whether the result is SQLITE_DONE.

#### `public bool `[`next`](#classDBStatement_1a571c59f80ee8940aaedd2b6f6abc9bd4)`()` {#classDBStatement_1a571c59f80ee8940aaedd2b6f6abc9bd4}

Call sqlite3_step on the statement.

> Todo: Interpret what this means and how's it's different from [go()](#classDBStatement_1a0d92705f6226d3bfea6a1d99d797e7be).

#### Returns
Whether the result is SQLITE_ROW.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`skip`](#classDBStatement_1a52b6771be336a56bbc8f02bcb99e55c7)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` rows)` {#classDBStatement_1a52b6771be336a56bbc8f02bcb99e55c7}

Skip a certain number of rows in the results.

#### Parameters
* `rows` The number of rows to skip.

#### Returns
The number of rows actually skipped.

#### `public bool `[`reset`](#classDBStatement_1a7c08cde3f29a7e5158e4ff290f9c6e25)`()` {#classDBStatement_1a7c08cde3f29a7e5158e4ff290f9c6e25}

Call sqlite3_reset.

> Todo: Interpret what this does.

#### Returns
true.

#### `public bool `[`close`](#classDBStatement_1a1d8293b4debace6e99c0dbede2677ee7)`()` {#classDBStatement_1a1d8293b4debace6e99c0dbede2677ee7}

Close the statement.

#### Returns
true.

#### `public bool `[`bind`](#classDBStatement_1aa7f4478203eaa27a68d33fa18a1ab9b4)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colnum,double val)` {#classDBStatement_1aa7f4478203eaa27a68d33fa18a1ab9b4}

Bind the given data to the given column.

#### Parameters
* `colnum` The column number to bind to.

* `val` The data to bind.

#### Returns
true.

#### `public bool `[`bind`](#classDBStatement_1a289bdcf455c3d15c1defc949fed8ff8b)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colnum,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` val)` {#classDBStatement_1a289bdcf455c3d15c1defc949fed8ff8b}

Bind the given data to the given column.

#### Parameters
* `colnum` The column number to bind to.

* `val` The data to bind.

#### Returns
true.

#### `public bool `[`bind`](#classDBStatement_1ab817aa527c6c877e4bcc0410080b9b82)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colnum,String val)` {#classDBStatement_1ab817aa527c6c877e4bcc0410080b9b82}

Bind the given data to the given column.

#### Parameters
* `colnum` The column number to bind to.

* `val` The data to bind.

#### Returns
true.

#### `public bool `[`bind`](#classDBStatement_1a42ddfab63e2f5438e6a971bf96e6cdab)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` colnum,bool val)` {#classDBStatement_1a42ddfab63e2f5438e6a971bf96e6cdab}

Bind the given data to the given column.

#### Parameters
* `colnum` The column number to bind to.

* `val` The data to bind.

#### Returns
true.

# class `Exit` {#classExit}

Represents a method of getting from one [Area](#classArea) to another.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classExit_1ad611f082650a2cb50c55e45a22aeea77) | The x coordinate of the exit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classExit_1a46d25b3b696f875747de1f4ddfbbf1a5) | The y coordinate of the exit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`target`](#classExit_1a6980668d676c2c6c4c465f05a65fbe20) | The [Area](#classArea) ID of the target level.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`type`](#classExit_1ad79ae2186aea695de8bba1cb25147b6b) | The [Exit](#classExit) type.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`tileid`](#classExit_1a173070014dcf8334a334f8005035d8b5) | The class ID of the [Exit](#classExit) if it is a stairs type [Exit](#classExit), 0 otherwise.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`level`](#classExit_1ad626cb965b1345961c7c98808a5c4cd9) | The [Area](#classArea) ID of the source side of the [Exit](#classExit).

## Members

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classExit_1ad611f082650a2cb50c55e45a22aeea77) {#classExit_1ad611f082650a2cb50c55e45a22aeea77}

The x coordinate of the exit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classExit_1a46d25b3b696f875747de1f4ddfbbf1a5) {#classExit_1a46d25b3b696f875747de1f4ddfbbf1a5}

The y coordinate of the exit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`target`](#classExit_1a6980668d676c2c6c4c465f05a65fbe20) {#classExit_1a6980668d676c2c6c4c465f05a65fbe20}

The [Area](#classArea) ID of the target level.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`type`](#classExit_1ad79ae2186aea695de8bba1cb25147b6b) {#classExit_1ad79ae2186aea695de8bba1cb25147b6b}

The [Exit](#classExit) type.

1 - A walk through [Exit](#classExit)

2 - A stairs type [Exit](#classExit)

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`tileid`](#classExit_1a173070014dcf8334a334f8005035d8b5) {#classExit_1a173070014dcf8334a334f8005035d8b5}

The class ID of the [Exit](#classExit) if it is a stairs type [Exit](#classExit), 0 otherwise.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`level`](#classExit_1ad626cb965b1345961c7c98808a5c4cd9) {#classExit_1ad626cb965b1345961c7c98808a5c4cd9}

The [Area](#classArea) ID of the source side of the [Exit](#classExit).

# class `File` {#classFile}

This class handles the opening, reading and writing of files.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`readable`](#classFile_1a0415c7cad271ddfd0931223c210f1ddd) | Whether or not the file can be read from.
`public bool `[`writeable`](#classFile_1ae27c16eecaebba584c6edbfdfcc82a98) | Whether or not the file is writeable.
`public bool `[`seekable`](#classFile_1a28141c09589502aa71c4bb8eca9dd2d8) | Whether or not the file is seekable.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mode`](#classFile_1ad69e4f31f332da4ce62d4dbbf905fc3b) | The mode the file was opened with.
`public bool `[`binaryMode`](#classFile_1aa14287c782b3732a65678c84ca9fa20d) | Whether the file was opened as a binary file or not.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`length`](#classFile_1a29b6bf8632786b651f99746906cefafb) | The file length.
`public String `[`path`](#classFile_1a3c225ed52bdd0630736490e8ffd47dab) | The relative path to the [File](#classFile) (the filename/path given for opening).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`position`](#classFile_1a336836eda3d033e4005283f2f1604cb3) | The position in the [File](#classFile) (where the next read or write will occur).
`public bool `[`eof`](#classFile_1a391472ffe19feb34d5e88325bdf17f23) | Whether or not the [File](#classFile) is at end of file.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`accessed`](#classFile_1a5a63aa7adeaaffddbd52b7c15aea8c87) | The last accessed time of the [File](#classFile).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`created`](#classFile_1a7ff0ed452a129324a9a5fcbee803a373) | The creation time of the [File](#classFile).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`modified`](#classFile_1af946c3c5984c1e0580db67bd80c24215) | The last modified time of the [File](#classFile).
`public bool `[`autoflush`](#classFile_1abb41241dc0a11a7725345da82c460496) | Whether or not to autoflush the [File](#classFile).
`public `[`File`](#classFile)` `[`close`](#classFile_1ab8f676c747765ad97655928f1c2baf04)`()` | Close the current file and then return it.
`public `[`File`](#classFile)` `[`reopen`](#classFile_1a6fe4ccb2fea82b46e091aa7c46df4dbe)`()` | Reopen the file, equivalent to calling open with the same parameters as were used the first time.
`public String `[`read`](#classFile_1a2a09f2249cb161ee348e9198b054df0d)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` count)` | Read count chars from the file.
`public byte[] `[`read`](#classFile_1a8b86be0df9dca624871c726b2eb96a44)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` count)` | Read count bytes from the file.
`public String `[`readLine`](#classFile_1a1f9845e5268c8d9ac944235f99538320)`()` | Read a line from the file and return it.
`public String[] `[`readAllLines`](#classFile_1a2da4d7f22372013563a6d2301c3217bb)`()` | Read all the lines from the file into a String array.
`public String `[`readAll`](#classFile_1a59de24f17a4fce1bdffb20d63ed63bc7)`()` | Read the entire file and return as a String.
`public `[`File`](#classFile)` `[`write`](#classFile_1a90860f54a694ad17207855c4ff0c6053)`(...)` | Write the string representation (for standard files) or the binary representation (for binary files) of each of the arguments to the [File](#classFile).
`public `[`File`](#classFile)` `[`seek`](#classFile_1ad3b8e538df678492e7f5e0330c613809)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` n)` | Seek n bytes from the current location.
`public `[`File`](#classFile)` `[`seek`](#classFile_1ad88c69806c5f39b110cc8277cb7dc7f6)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` n,bool isLines,bool fromStart)` | Seek n bytes or lines (depending on isLines) from the current location or the start of file (depending on fromStart).
`public `[`File`](#classFile)` `[`flush`](#classFile_1a53a7ee7193e77c0fe8c139f0965e3720)`()` | Flush the buffers for the [File](#classFile).
`public `[`File`](#classFile)` `[`reset`](#classFile_1ae367f8c9c2b0fa514d9a15feea63cfe5)`()` | Seek back to the beginning of the [File](#classFile).
`public `[`File`](#classFile)` `[`end`](#classFile_1ae1809bb15e04ae6085b444f3e8fbc943)`()` | Seek to the end of the [File](#classFile).

## Members

#### `public bool `[`readable`](#classFile_1a0415c7cad271ddfd0931223c210f1ddd) {#classFile_1a0415c7cad271ddfd0931223c210f1ddd}

Whether or not the file can be read from.

Based on whether the [File](#classFile) is open, whether it is at the end of file, and whether there is an error pending.

#### `public bool `[`writeable`](#classFile_1ae27c16eecaebba584c6edbfdfcc82a98) {#classFile_1ae27c16eecaebba584c6edbfdfcc82a98}

Whether or not the file is writeable.

Based on whether the [File](#classFile) is open, whether there is an error pending and whether the [File](#classFile) was opened for writing or not.

#### `public bool `[`seekable`](#classFile_1a28141c09589502aa71c4bb8eca9dd2d8) {#classFile_1a28141c09589502aa71c4bb8eca9dd2d8}

Whether or not the file is seekable.

Based on whether the [File](#classFile) is open and whether there is an error pending.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mode`](#classFile_1ad69e4f31f332da4ce62d4dbbf905fc3b) {#classFile_1ad69e4f31f332da4ce62d4dbbf905fc3b}

The mode the file was opened with.

Compare with FILE_READ, FILE_WRITE and FILE_APPEND.

#### `public bool `[`binaryMode`](#classFile_1aa14287c782b3732a65678c84ca9fa20d) {#classFile_1aa14287c782b3732a65678c84ca9fa20d}

Whether the file was opened as a binary file or not.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`length`](#classFile_1a29b6bf8632786b651f99746906cefafb) {#classFile_1a29b6bf8632786b651f99746906cefafb}

The file length.

#### `public String `[`path`](#classFile_1a3c225ed52bdd0630736490e8ffd47dab) {#classFile_1a3c225ed52bdd0630736490e8ffd47dab}

The relative path to the [File](#classFile) (the filename/path given for opening).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`position`](#classFile_1a336836eda3d033e4005283f2f1604cb3) {#classFile_1a336836eda3d033e4005283f2f1604cb3}

The position in the [File](#classFile) (where the next read or write will occur).

#### `public bool `[`eof`](#classFile_1a391472ffe19feb34d5e88325bdf17f23) {#classFile_1a391472ffe19feb34d5e88325bdf17f23}

Whether or not the [File](#classFile) is at end of file.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`accessed`](#classFile_1a5a63aa7adeaaffddbd52b7c15aea8c87) {#classFile_1a5a63aa7adeaaffddbd52b7c15aea8c87}

The last accessed time of the [File](#classFile).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`created`](#classFile_1a7ff0ed452a129324a9a5fcbee803a373) {#classFile_1a7ff0ed452a129324a9a5fcbee803a373}

The creation time of the [File](#classFile).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`modified`](#classFile_1af946c3c5984c1e0580db67bd80c24215) {#classFile_1af946c3c5984c1e0580db67bd80c24215}

The last modified time of the [File](#classFile).

#### `public bool `[`autoflush`](#classFile_1abb41241dc0a11a7725345da82c460496) {#classFile_1abb41241dc0a11a7725345da82c460496}

Whether or not to autoflush the [File](#classFile).

#### `public `[`File`](#classFile)` `[`close`](#classFile_1ab8f676c747765ad97655928f1c2baf04)`()` {#classFile_1ab8f676c747765ad97655928f1c2baf04}

Close the current file and then return it.

#### Returns
The same [File](#classFile) object.

#### `public `[`File`](#classFile)` `[`reopen`](#classFile_1a6fe4ccb2fea82b46e091aa7c46df4dbe)`()` {#classFile_1a6fe4ccb2fea82b46e091aa7c46df4dbe}

Reopen the file, equivalent to calling open with the same parameters as were used the first time.

#### Returns
The same [File](#classFile) object.

#### `public String `[`read`](#classFile_1a2a09f2249cb161ee348e9198b054df0d)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` count)` {#classFile_1a2a09f2249cb161ee348e9198b054df0d}

Read count chars from the file.

Used when the file was not opened in binary mode.

#### Parameters
* `count` The number of characters to read.

#### Returns
The characters that were read.

#### `public byte[] `[`read`](#classFile_1a8b86be0df9dca624871c726b2eb96a44)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` count)` {#classFile_1a8b86be0df9dca624871c726b2eb96a44}

Read count bytes from the file.

Used when the file was opened in binary mode.

#### Parameters
* `count` The number of bytes to read.

#### Returns
An array of the bytes read.

#### `public String `[`readLine`](#classFile_1a1f9845e5268c8d9ac944235f99538320)`()` {#classFile_1a1f9845e5268c8d9ac944235f99538320}

Read a line from the file and return it.

#### Returns
The line.

#### `public String[] `[`readAllLines`](#classFile_1a2da4d7f22372013563a6d2301c3217bb)`()` {#classFile_1a2da4d7f22372013563a6d2301c3217bb}

Read all the lines from the file into a String array.

#### Returns
An array of all the lines in the file.

#### `public String `[`readAll`](#classFile_1a59de24f17a4fce1bdffb20d63ed63bc7)`()` {#classFile_1a59de24f17a4fce1bdffb20d63ed63bc7}

Read the entire file and return as a String.

Includes a seek to start from the beginning of the file, regardless of where the current position was.

#### Returns
The entire file in a String.

#### `public `[`File`](#classFile)` `[`write`](#classFile_1a90860f54a694ad17207855c4ff0c6053)`(...)` {#classFile_1a90860f54a694ad17207855c4ff0c6053}

Write the string representation (for standard files) or the binary representation (for binary files) of each of the arguments to the [File](#classFile).

#### Returns
The [File](#classFile).

#### `public `[`File`](#classFile)` `[`seek`](#classFile_1ad3b8e538df678492e7f5e0330c613809)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` n)` {#classFile_1ad3b8e538df678492e7f5e0330c613809}

Seek n bytes from the current location.

#### Parameters
* `n` Number of bytes to move..

#### Returns
The [File](#classFile).

#### `public `[`File`](#classFile)` `[`seek`](#classFile_1ad88c69806c5f39b110cc8277cb7dc7f6)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` n,bool isLines,bool fromStart)` {#classFile_1ad88c69806c5f39b110cc8277cb7dc7f6}

Seek n bytes or lines (depending on isLines) from the current location or the start of file (depending on fromStart).

#### Parameters
* `n` Number of bytes or lines to move.

* `isLines` Whether n is a number of lines, or just bytes.

* `fromStart` Whether to start from the start of file, or the current location.

#### Returns
The [File](#classFile).

#### `public `[`File`](#classFile)` `[`flush`](#classFile_1a53a7ee7193e77c0fe8c139f0965e3720)`()` {#classFile_1a53a7ee7193e77c0fe8c139f0965e3720}

Flush the buffers for the [File](#classFile).

#### Returns
The [File](#classFile).

#### `public `[`File`](#classFile)` `[`reset`](#classFile_1ae367f8c9c2b0fa514d9a15feea63cfe5)`()` {#classFile_1ae367f8c9c2b0fa514d9a15feea63cfe5}

Seek back to the beginning of the [File](#classFile).

#### Returns
The [File](#classFile).

#### `public `[`File`](#classFile)` `[`end`](#classFile_1ae1809bb15e04ae6085b444f3e8fbc943)`()` {#classFile_1ae1809bb15e04ae6085b444f3e8fbc943}

Seek to the end of the [File](#classFile).

#### Returns
The [File](#classFile).

# class `FileTools` {#classFileTools}

A collection of tools to do things like move files and determine whether files exist.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`writeText`](#classFileTools_1a6d7dea2b6426a01de14576827af4c606)`(String file,...)` | Write the string representation (for standard files) or the binary representation (for binary files) of each of the arguments to the file.
`public bool `[`appendText`](#classFileTools_1a4f2c1b01653f22bb40d66d8cc7c16c6f)`(String file,...)` | Append the string representation (for standard files) or the binary representation (for binary files) of each of the arguments to the file.

## Members

#### `public bool `[`writeText`](#classFileTools_1a6d7dea2b6426a01de14576827af4c606)`(String file,...)` {#classFileTools_1a6d7dea2b6426a01de14576827af4c606}

Write the string representation (for standard files) or the binary representation (for binary files) of each of the arguments to the file.

#### Parameters
* `file` The filename of the file to write to.

#### Returns
Whether or not the operation was successful.

#### `public bool `[`appendText`](#classFileTools_1a4f2c1b01653f22bb40d66d8cc7c16c6f)`(String file,...)` {#classFileTools_1a4f2c1b01653f22bb40d66d8cc7c16c6f}

Append the string representation (for standard files) or the binary representation (for binary files) of each of the arguments to the file.

#### Parameters
* `file` The filename of the file to write to.

#### Returns
Whether or not the operation was successful.

# class `Folder` {#classFolder}

Represents a folder.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public String `[`name`](#classFolder_1a1b7bc0e644f873164b1d9c17085cf178) | The path name to the directory.
`public `[`Folder`](#classFolder)` `[`create`](#classFolder_1a3a0bac848c1e110eb40dde3cd48393b8)`(String name)` | Create a new directory.
`public bool `[`remove`](#classFolder_1aca893daac6c6747895d50987cf9cf34c)`()` | Remove the directory.
`public String[] `[`getFiles`](#classFolder_1a811c76e8bd576486d01311bde02a79b3)`()` | Get the filename for each of the files in the directory.
`public String[] `[`getFolders`](#classFolder_1ad738dfd1f4c322347a1caa549d4b3eec)`()` | Get the name for each of the sub-directories in the current directory.

## Members

#### `public String `[`name`](#classFolder_1a1b7bc0e644f873164b1d9c17085cf178) {#classFolder_1a1b7bc0e644f873164b1d9c17085cf178}

The path name to the directory.

#### `public `[`Folder`](#classFolder)` `[`create`](#classFolder_1a3a0bac848c1e110eb40dde3cd48393b8)`(String name)` {#classFolder_1a3a0bac848c1e110eb40dde3cd48393b8}

Create a new directory.

#### Parameters
* `name` The name of the directory to create under the current directory.

#### Returns
The new [Folder](#classFolder) created.

#### `public bool `[`remove`](#classFolder_1aca893daac6c6747895d50987cf9cf34c)`()` {#classFolder_1aca893daac6c6747895d50987cf9cf34c}

Remove the directory.

Must be empty to work properly.

#### Returns
true.

#### `public String[] `[`getFiles`](#classFolder_1a811c76e8bd576486d01311bde02a79b3)`()` {#classFolder_1a811c76e8bd576486d01311bde02a79b3}

Get the filename for each of the files in the directory.

#### Returns
An array of all the filenames.

#### `public String[] `[`getFolders`](#classFolder_1ad738dfd1f4c322347a1caa549d4b3eec)`()` {#classFolder_1ad738dfd1f4c322347a1caa549d4b3eec}

Get the name for each of the sub-directories in the current directory.

#### Returns
An array of all the folder names.

# class `Frame` {#classFrame}

This class represents a screen hook for a [Frame](#classFrame).

> Todo: Explain (and understand) this better. 

Verify all the documentation in this class.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classFrame_1a0e43afae34b6d1fb613a42fa5e027d01) | The x coordinate (left) of the [Frame](#classFrame).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classFrame_1a465bb636563d27695e1505e778e08c57) | The y coordinate (top) of the [Frame](#classFrame).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`xsize`](#classFrame_1a3217f35f7ca8516a5f636edc928badbf) | The xsize (width) of the [Frame](#classFrame).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ysize`](#classFrame_1adb6e9d30c3b3452aae2b3744701b4b89) | The ysize (height) of the [Frame](#classFrame).
`public bool `[`visible`](#classFrame_1a863ec6abf9fd37fa6a33e63d1d58718f) | Whether or not the [Frame](#classFrame) is visible.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`align`](#classFrame_1a7344aa54a7eeaa68fdf7fa42b0fa0a29) | The horizontal alignment.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`zorder`](#classFrame_1a7b6c33df644c92758f289fd76e905b89) | The z-order of the [Frame](#classFrame) (what it covers up and is covered by).
`public ClickHandler `[`click`](#classFrame_1a2e9a32aed91d5f9c7ffb77d93f39a047) | The click handler that gets called when the [Frame](#classFrame) is clicked.
`public HoverHandler `[`hover`](#classFrame_1a62ee67d27035fd2178031b0eee2116f4) | The hover handler that gets called when the [Frame](#classFrame) gets hovered over.
`public  `[`Frame`](#classFrame_1a659ccea661a5f12de6baefb5bfa9b732)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` align,bool automap,ClickHandler click,HoverHandler hover)` | Create a [Frame](#classFrame) hook with the given parameters.
`public void `[`remove`](#classFrame_1ab6188f670788ea98d8a9d3fd65211d8f)`()` | Remove the [Frame](#classFrame) from the screen and destroy the corresponding object.

## Members

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classFrame_1a0e43afae34b6d1fb613a42fa5e027d01) {#classFrame_1a0e43afae34b6d1fb613a42fa5e027d01}

The x coordinate (left) of the [Frame](#classFrame).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classFrame_1a465bb636563d27695e1505e778e08c57) {#classFrame_1a465bb636563d27695e1505e778e08c57}

The y coordinate (top) of the [Frame](#classFrame).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`xsize`](#classFrame_1a3217f35f7ca8516a5f636edc928badbf) {#classFrame_1a3217f35f7ca8516a5f636edc928badbf}

The xsize (width) of the [Frame](#classFrame).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ysize`](#classFrame_1adb6e9d30c3b3452aae2b3744701b4b89) {#classFrame_1adb6e9d30c3b3452aae2b3744701b4b89}

The ysize (height) of the [Frame](#classFrame).

#### `public bool `[`visible`](#classFrame_1a863ec6abf9fd37fa6a33e63d1d58718f) {#classFrame_1a863ec6abf9fd37fa6a33e63d1d58718f}

Whether or not the [Frame](#classFrame) is visible.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`align`](#classFrame_1a7344aa54a7eeaa68fdf7fa42b0fa0a29) {#classFrame_1a7344aa54a7eeaa68fdf7fa42b0fa0a29}

The horizontal alignment.

0 - Left

1 - Right

2 - Center

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`zorder`](#classFrame_1a7b6c33df644c92758f289fd76e905b89) {#classFrame_1a7b6c33df644c92758f289fd76e905b89}

The z-order of the [Frame](#classFrame) (what it covers up and is covered by).

#### `public ClickHandler `[`click`](#classFrame_1a2e9a32aed91d5f9c7ffb77d93f39a047) {#classFrame_1a2e9a32aed91d5f9c7ffb77d93f39a047}

The click handler that gets called when the [Frame](#classFrame) is clicked.

#### `public HoverHandler `[`hover`](#classFrame_1a62ee67d27035fd2178031b0eee2116f4) {#classFrame_1a62ee67d27035fd2178031b0eee2116f4}

The hover handler that gets called when the [Frame](#classFrame) gets hovered over.

#### `public  `[`Frame`](#classFrame_1a659ccea661a5f12de6baefb5bfa9b732)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` align,bool automap,ClickHandler click,HoverHandler hover)` {#classFrame_1a659ccea661a5f12de6baefb5bfa9b732}

Create a [Frame](#classFrame) hook with the given parameters.

#### Parameters
* `x` The x coordinate (left) of the [Frame](#classFrame).

* `y` The y coordinate (top) of the [Frame](#classFrame).

* `x2` The xsize (width) of the [Frame](#classFrame).

* `y2` The ysize (height) of the [Frame](#classFrame).

* `align` The horizontal alignment.

0 - Left

1 - Right

2 - Center

#### Parameters
* `automap` Whether the [Frame](#classFrame) is in automap coordinate space (true) or screen coordinate space (false).

* `click` The click handler that gets called when the [Frame](#classFrame) is clicked.

* `hover` The hover handler that gets called when the [Frame](#classFrame) gets hovered over.

#### `public void `[`remove`](#classFrame_1ab6188f670788ea98d8a9d3fd65211d8f)`()` {#classFrame_1ab6188f670788ea98d8a9d3fd65211d8f}

Remove the [Frame](#classFrame) from the screen and destroy the corresponding object.

# class `Image` {#classImage}

This class represents a screen hook for a [Image](#classImage).

> Todo: Explain (and understand) this better. 

Verify all the documentation in this class.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classImage_1a7f8f4530212c93856e611030e46c82af) | The x coordinate (left) of the [Image](#classImage).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classImage_1a9b03b7d8dd6f69cb5a444bdd0edd786e) | The y coordinate (top) of the [Image](#classImage).
`public bool `[`visible`](#classImage_1addd9aead76cc50bf9891d4096195c18d) | Whether or not the [Image](#classImage) is visible.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`align`](#classImage_1a943ad156731bd86b94d77e4f617e0fe8) | The horizontal alignment.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`zorder`](#classImage_1a8f7cef488ff6a72dde9dea8a5c14e39b) | The z-order of the [Image](#classImage) (what it covers up and is covered by).
`public ClickHandler `[`click`](#classImage_1a69ec2e746b9688ac033064f69a132a35) | The click handler that gets called when the [Image](#classImage) is clicked.
`public HoverHandler `[`hover`](#classImage_1ad60232f651bec42eab0f73f2344e4bf0) | The hover handler that gets called when the [Image](#classImage) gets hovered over.
`public String `[`location`](#classImage_1af4f3e489b1fb5cfa4ffdbe52ea4aee51) | Location of the file to load for display.
`public  `[`Image`](#classImage_1ae6297ffbf18a41caa7971e58571250db)`(String szText,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` color,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` align,bool automap,ClickHandler click,HoverHandler hover)` | Create an [Image](#classImage) hook with the given parameters.
`public void `[`remove`](#classImage_1a777c1f1bf88cf556aa256c6559bd3401)`()` | Remove the [Image](#classImage) from the screen and destroy the corresponding object.

## Members

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classImage_1a7f8f4530212c93856e611030e46c82af) {#classImage_1a7f8f4530212c93856e611030e46c82af}

The x coordinate (left) of the [Image](#classImage).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classImage_1a9b03b7d8dd6f69cb5a444bdd0edd786e) {#classImage_1a9b03b7d8dd6f69cb5a444bdd0edd786e}

The y coordinate (top) of the [Image](#classImage).

#### `public bool `[`visible`](#classImage_1addd9aead76cc50bf9891d4096195c18d) {#classImage_1addd9aead76cc50bf9891d4096195c18d}

Whether or not the [Image](#classImage) is visible.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`align`](#classImage_1a943ad156731bd86b94d77e4f617e0fe8) {#classImage_1a943ad156731bd86b94d77e4f617e0fe8}

The horizontal alignment.

0 - Left

1 - Right

2 - Center

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`zorder`](#classImage_1a8f7cef488ff6a72dde9dea8a5c14e39b) {#classImage_1a8f7cef488ff6a72dde9dea8a5c14e39b}

The z-order of the [Image](#classImage) (what it covers up and is covered by).

#### `public ClickHandler `[`click`](#classImage_1a69ec2e746b9688ac033064f69a132a35) {#classImage_1a69ec2e746b9688ac033064f69a132a35}

The click handler that gets called when the [Image](#classImage) is clicked.

#### `public HoverHandler `[`hover`](#classImage_1ad60232f651bec42eab0f73f2344e4bf0) {#classImage_1ad60232f651bec42eab0f73f2344e4bf0}

The hover handler that gets called when the [Image](#classImage) gets hovered over.

#### `public String `[`location`](#classImage_1af4f3e489b1fb5cfa4ffdbe52ea4aee51) {#classImage_1af4f3e489b1fb5cfa4ffdbe52ea4aee51}

Location of the file to load for display.

#### `public  `[`Image`](#classImage_1ae6297ffbf18a41caa7971e58571250db)`(String szText,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` color,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` align,bool automap,ClickHandler click,HoverHandler hover)` {#classImage_1ae6297ffbf18a41caa7971e58571250db}

Create an [Image](#classImage) hook with the given parameters.

#### Parameters
* `szText` The filename to load the image from.

* `x` The x coordinate (left) of the [Image](#classImage).

* `y` The y coordinate (top) of the [Image](#classImage).

* `color` The color of the [Image](#classImage).

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=1000](http://forums.d2botnet.org/viewtopic.php?f=18&t=1000)

#### Parameters
* `align` The horizontal alignment.

0 - Left

1 - Right

2 - Center

#### Parameters
* `automap` Whether the [Image](#classImage) is in automap coordinate space (true) or screen coordinate space (false).

* `click` The click handler that gets called when the [Image](#classImage) is clicked.

* `hover` The hover handler that gets called when the [Image](#classImage) gets hovered over.

#### `public void `[`remove`](#classImage_1a777c1f1bf88cf556aa256c6559bd3401)`()` {#classImage_1a777c1f1bf88cf556aa256c6559bd3401}

Remove the [Image](#classImage) from the screen and destroy the corresponding object.

# class `Line` {#classLine}

A 2d line.

> Todo: Verify all the documentation in this class.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classLine_1aced699d771efdaea44224fb76035ad64) | The first x coordinate of the [Line](#classLine).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classLine_1aba0b47fa036eff1c6cbc4369389a0cf8) | The first y coordinate of the [Line](#classLine).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x2`](#classLine_1a4f08d1038eba337d6f0fb32713e528f1) | The second x coordinate of the [Line](#classLine).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y2`](#classLine_1ae31c92ab0df730a2fdd34201ce6feb9d) | The second y coordinate of the [Line](#classLine).
`public bool `[`visible`](#classLine_1ad03610daf3369fe0beaaa0b63bb00826) | Whether or not the [Line](#classLine) is visible.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`color`](#classLine_1a9efd376d9b6ac16dd115bd7bfbf9c923) | The color of the [Line](#classLine).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`zorder`](#classLine_1ab5abf5a8115842ca5e99a827966a332b) | The z-order of the [Line](#classLine) (what it covers up and is covered by).
`public ClickHandler `[`click`](#classLine_1a4d07ee7727434b01299b0d41389a1e01) | The click handler that gets called when the [Line](#classLine) is clicked.
`public HoverHandler `[`hover`](#classLine_1a290a03210ee18d9644db5679e931f7a3) | The hover handler that gets called when the [Line](#classLine) gets hovered over.
`public  `[`Line`](#classLine_1afcf6affa1a4e375b37e61669b1103f12)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` color,bool automap,ClickHandler click,HoverHandler hover)` | Create a [Line](#classLine) hook with the given parameters.
`public void `[`remove`](#classLine_1a33c4869ac6002c11dcace8c4e5d47c60)`()` | Remove the [Line](#classLine) from the screen and destroy the corresponding object.

## Members

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classLine_1aced699d771efdaea44224fb76035ad64) {#classLine_1aced699d771efdaea44224fb76035ad64}

The first x coordinate of the [Line](#classLine).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classLine_1aba0b47fa036eff1c6cbc4369389a0cf8) {#classLine_1aba0b47fa036eff1c6cbc4369389a0cf8}

The first y coordinate of the [Line](#classLine).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x2`](#classLine_1a4f08d1038eba337d6f0fb32713e528f1) {#classLine_1a4f08d1038eba337d6f0fb32713e528f1}

The second x coordinate of the [Line](#classLine).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y2`](#classLine_1ae31c92ab0df730a2fdd34201ce6feb9d) {#classLine_1ae31c92ab0df730a2fdd34201ce6feb9d}

The second y coordinate of the [Line](#classLine).

#### `public bool `[`visible`](#classLine_1ad03610daf3369fe0beaaa0b63bb00826) {#classLine_1ad03610daf3369fe0beaaa0b63bb00826}

Whether or not the [Line](#classLine) is visible.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`color`](#classLine_1a9efd376d9b6ac16dd115bd7bfbf9c923) {#classLine_1a9efd376d9b6ac16dd115bd7bfbf9c923}

The color of the [Line](#classLine).

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=1000](http://forums.d2botnet.org/viewtopic.php?f=18&t=1000)

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`zorder`](#classLine_1ab5abf5a8115842ca5e99a827966a332b) {#classLine_1ab5abf5a8115842ca5e99a827966a332b}

The z-order of the [Line](#classLine) (what it covers up and is covered by).

#### `public ClickHandler `[`click`](#classLine_1a4d07ee7727434b01299b0d41389a1e01) {#classLine_1a4d07ee7727434b01299b0d41389a1e01}

The click handler that gets called when the [Line](#classLine) is clicked.

#### `public HoverHandler `[`hover`](#classLine_1a290a03210ee18d9644db5679e931f7a3) {#classLine_1a290a03210ee18d9644db5679e931f7a3}

The hover handler that gets called when the [Line](#classLine) gets hovered over.

#### `public  `[`Line`](#classLine_1afcf6affa1a4e375b37e61669b1103f12)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y2,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` color,bool automap,ClickHandler click,HoverHandler hover)` {#classLine_1afcf6affa1a4e375b37e61669b1103f12}

Create a [Line](#classLine) hook with the given parameters.

#### Parameters
* `x` The x coordinate (left) of the [Line](#classLine).

* `y` The y coordinate (top) of the [Line](#classLine).

* `x2` The xsize (width) of the [Line](#classLine).

* `y2` The ysize (height) of the [Line](#classLine).

* `color` The color of the [Line](#classLine).

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=1000](http://forums.d2botnet.org/viewtopic.php?f=18&t=1000)

#### Parameters
* `automap` Whether the [Line](#classLine) is in automap coordinate space (true) or screen coordinate space (false).

* `click` The click handler that gets called when the [Line](#classLine) is clicked.

* `hover` The hover handler that gets called when the [Line](#classLine) gets hovered over.

#### `public void `[`remove`](#classLine_1a33c4869ac6002c11dcace8c4e5d47c60)`()` {#classLine_1a33c4869ac6002c11dcace8c4e5d47c60}

Remove the [Line](#classLine) from the screen and destroy the corresponding object.

# class `Me` {#classMe}

The class that represents the controlled unit.

Technically, also called [Unit](#classUnit), but since C++ doesn't support class overloading, called it [Me](#classMe) here instead.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`type`](#classMe_1a52c5b4db63a7b8446dc8107fc07cdf3d) | The type of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`classId`](#classMe_1afc46c25e98a712ddbab9fe5b1895c581) | The class id of the object.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mode`](#classMe_1aaaa649505660616f54b0ee92776a25b8) | The mode of the unit.
`public String `[`name`](#classMe_1a7a79209dc7ba4388f1a0b0948e1809c2) | The name of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mapid`](#classMe_1aeca5382b1726287c31235f5cc9d4d22d) | The seed used to create the map.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`act`](#classMe_1a9ac2b33c84c6cd3b15afa9b42929fc3f) | The act where the unit is currently located.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`gid`](#classMe_1a1c9269b25de87db3987394c129ef4416) | The unit unique id.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classMe_1a6e1986e643022cf0768b14b83f14d01b) | The x location of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classMe_1aa554298f46bbfaf83a341b5e3d86b2e5) | The y location of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`targetx`](#classMe_1ae57bbfa40548f63d807ec5ead0301024) | The target x location of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`targety`](#classMe_1afe98390a5d4f85c8acd10b6312616c7f) | The target y location of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`area`](#classMe_1a20c97fb4d7a65f1125b2ef94edc93382) | The id of the area (level) the unit is located in.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`hp`](#classMe_1ada4675cf13005bce0c1562c903dc44c5) | The unit's current health.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`hpmax`](#classMe_1a76936aa550e766f03719a350a0166a08) | The unit's maximum health.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mp`](#classMe_1a2818fdee3d22e50df4d044294978efc4) | The unit's current mana.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mpmax`](#classMe_1aff3b5b0dd48925f742d96385f0cc3391) | The unit's maximum mana.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`stamina`](#classMe_1ab53e765f014b5a962dc0cf0374d61047) | The unit's current stamina.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`staminamax`](#classMe_1a27dc070bdfcf26014c8e05f8c3d45d54) | The unit's maximum stamina.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`charlvl`](#classMe_1ad1de73d82c060287cddb8c5e111c4763) | The character level.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`itemcount`](#classMe_1ad1ccf5dc94d072c2ceb7b505868e2058) | The number of items in inventory.
`public double `[`owner`](#classMe_1a3322befee99b6afa964c5f8ee52983d2) | The unit id of the owner of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ownertype`](#classMe_1a6f9f7bbef6962920fe9306a620f204b6) | The type of owner.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`spectype`](#classMe_1ad244e2f81cefed6a58bc2b3aed36b9f3) | The special type of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`direction`](#classMe_1a6ee239b2452d3c06e33de7e1725be36a) | The direction of the unit.
`public String `[`code`](#classMe_1aa90bcab94a360d2e8380323d8b4640cf) | The three digit code for an item.
`public String `[`prefix`](#classMe_1ab68062a31f250f249221a399c541b5e8) | The magic prefix of the item.
`public String `[`suffix`](#classMe_1a3633bb215e73eda5916b9c0f372d1f80) | The magic suffix of the item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`prefixnum`](#classMe_1ae54c6d4c87d2ad0f7f1c9a6b1f4381fc) | The id code for the magic prefix.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`suffixnum`](#classMe_1a3d523157c13fcf3229ecc1b9d7724367) | The id code for the magic suffix.
`public String `[`fname`](#classMe_1a756f0b6b2b2b5f2439d1afe17e9d23ca) | The full name of an item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`quality`](#classMe_1ace5f9a9c6a8139fbe30ca258e2f1bdc5) | The item quality.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`node`](#classMe_1a71440306ac4fa9414da959b615f24200) | No clue.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`location`](#classMe_1a8932e926ae2bd373885fd45b2ef78907) | The location of the item (ground, inventory, stash, etc.).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sizex`](#classMe_1a2a1356d1bb2c3fdbda515446a06b626f) | The x size of the item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sizey`](#classMe_1ad5a059256862e2a27e4473f299c1c2a0) | The y size of the item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`itemType`](#classMe_1a5cbdd81b5607c8098994228fe5ab7151) | The type of the item.
`public String `[`description`](#classMe_1a52e690a6c8b7786a7bc56f400a96c4f4) | The description of the item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`bodylocation`](#classMe_1aa895c745c9f4f909986ddbacd7d31e73) | The equipped location of the item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ilvl`](#classMe_1a742c6b149eeaafd2e947662a2a7a3c61) | Item level.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`runwalk`](#classMe_1ab3fd8214e6809542ea1b99f0a2cd2929) | Whether the controlled character is in the always run mode or not.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`weaponswitch`](#classMe_1adb2a8033d013320f821b7afefab5749a) | Set the weapon switch.
`public String `[`account`](#classMe_1a73c79f2cf49747d6171827f6d6bcbe24) | The account name used to log on to the account.
`public String `[`charname`](#classMe_1a3aafeeae1d507aa6492fdfd14d44fc6a) | The character name.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`diff`](#classMe_1adddc240680097fd939d1afba7a1661cf) | The difficulty of the game.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`maxdiff`](#classMe_1afc952d96b2b29fbee19791b2e6234e97) | The maximum difficulty available.
`public String `[`gamename`](#classMe_1a82b4d94b4cf1d7310bb910919347eefd) | The name of the game.
`public String `[`gamepassword`](#classMe_1aa872a1fbaa9f8aa85d01963f71813324) | The password of the game.
`public String `[`gameserverip`](#classMe_1a3debf45fa879b24fad68925e53256c2b) | A string representation of the IPv4 address of the game server.
`public double `[`gamestarttime`](#classMe_1a2fed13a602e6882f51553b8d4c3042be) | Some sort of representation of the start time of the game.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`gametype`](#classMe_1ad31342341ab64e1444961ff1059c8a05) | The game type, expansion or not.
`public bool `[`itemoncursor`](#classMe_1abd16276ae4f171422e7185fdc3bb49cc) | Whether or not there is an item on the cursor.
`public bool `[`ladder`](#classMe_1ab9d7b4028e92dc9e8e8a124ae434ca82) | Whether or not the game is a ladder game.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ping`](#classMe_1aee8c765131a0ce6a04a5a78198d90910) | The ping in milliseconds.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`fps`](#classMe_1a26cbb5b87c79ba3d8fd43e56cce260c7) | The frame rate.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`playertype`](#classMe_1a8cf7291feb3bc8ebeb35dd5baf373427) | Whether or not the gametype is hardcore.
`public String `[`realm`](#classMe_1a9d5e5a2fec0a033316b6d49073b961d5) | The realm name.
`public String `[`realmshort`](#classMe_1aa8bdeb8ae3ba0db767a64f84ba489094) | The short realm name.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mercrevivecost`](#classMe_1a913adbc2fce146ef6c9f5268a76ebfc5) | The cost to revive the merc.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`chickenhp`](#classMe_1a215c51bfd214de4bff2eeefdc5ecd5ab) | The health at which to chicken if the character drops below.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`chickenmp`](#classMe_1a7e95aede9d9b33b217e2c74b0aed9865) | The mana at which to chicken if the character drops below.
`public bool `[`quitonhostile`](#classMe_1a2b52680cdbc8a340cf1b83a11f288e9a) | Whether to chicken if another player hostiles the controlled character.
`public bool `[`blockKeys`](#classMe_1a32b0fe4966c613767100bca03d4cff54) | Block keys...
`public bool `[`blockMouse`](#classMe_1aa9360f70984b69d889ca7744a977d031) | Block mouse...
`public bool `[`gameReady`](#classMe_1adbf3d1e8b502d34c5f6895bb2c40f1d8) | Whether or not the game window is in the game.
`public String `[`profile`](#classMe_1a5321127db8f2c6ca21d1428fd753157d) | The profile currently being used.
`public bool `[`nopickup`](#classMe_1a0a3973ed5dae29cbfe95dc7745646004) | Whether the game is set to not pick up items or not.
`public double `[`pid`](#classMe_1ad10c9c74976842a1f9634410ad833744) | The process id of Diablo II.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`screensize`](#classMe_1acf69e064892375059446599a1494fea6) | The window size.
`public String `[`windowtitle`](#classMe_1ae1fb424ddea108a0894dddafae0febbd) | The window title.
`public bool `[`ingame`](#classMe_1a92d8763c52f3ac2ec1d680bd026e2404) | True if the game is not at menu.
`public bool `[`quitonerror`](#classMe_1a57806876c33f36d3bcc1ca4599fe60be) | Whether or not to quit when there's an error.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`maxgametime`](#classMe_1ad4f57667eb1a3bd8e45288c9f3fe923a) | The max time in milliseconds to stay in game before the game auto-quits.
`public bool `[`getNext`](#classMe_1ac38694e80aec8caa323c50785816bcbd)`()` | Get the next unit that matches the originally given name or class id and originally specified mode.
`public bool `[`getNext`](#classMe_1a978176a65b1a7d182cee4fb9384cb626)`(String szName)` | Get the next unit that matches the given name and originally specified mode.
`public bool `[`getNext`](#classMe_1afb7f7bf695192c13ab56b2fbe29f743e)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwClassId)` | Get the next unit that matches the given class id and originally specified mode.
`public bool `[`getNext`](#classMe_1a02f641e81f28741b2bef50c16d3372da)`(String szName,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwMode)` | Get the next unit that matches the given name and mode.
`public bool `[`getNext`](#classMe_1a12feab5ac7792369015564b222441acd)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwClassId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwMode)` | Get the next unit that matches the given class id and mode.
`public void `[`cancel`](#classMe_1a3d6d506ed810276b50ba86f9c3f4dd98)`()` | Cancel some form of interaction.
`public bool `[`repair`](#classMe_1ab3612cb5a103004b87a9321b5a7aec50)`()` | Try to repair.
`public bool `[`useMenu`](#classMe_1aa29c5eccaa458901d4ec804e4fa167ca)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` menuItem)` | Use an NPC menu.
`public bool `[`interact`](#classMe_1a3341b12f791fa69c7ba048cc90778f20)`()` | Interact with the unit.
`public bool `[`interact`](#classMe_1a4742f918ff80aa898da57756b1a95fbd)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` destId)` | Interact with a waypoint.
`public `[`Unit`](#classUnit)` `[`getItem`](#classMe_1a9b55ad2bca33e8dd2c0aaeb38a19ec9b)`(String name,uint32_t mode,uint32_t nUnitId)` | Get an item from inventory by name, mode and nUnitId.
`public `[`Unit`](#classUnit)` `[`getItem`](#classMe_1ab6f23ff824a12c87b1bb6b2a046f907b)`(uint32_t classId,uint32_t mode,uint32_t nUnitId)` | Get an item from inventory by classId, mode and nUnitId.
`public `[`Unit`](#classUnit)` `[`getItems`](#classMe_1aa3a172ada3c1e477299cf697f3722076)`()` | Get all items from inventory.
`public `[`Unit`](#classUnit)` `[`getMerc`](#classMe_1a12c1ae747f947cc96bcda92d517e4fd4)`()` | Get a player's merc.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getMercHP`](#classMe_1a8b9d83bd2cc1d39c89c47c2f3d97f398)`()` | Get the merc's HP.
`public String `[`getSkill`](#classMe_1a449dad9a671272e94c7df7ab07277043)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` hand)` | Get skill name from hand.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classMe_1a482e347e3d2131af87a6aca7019bf4fd)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` hand)` | Get skill id from hand.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classMe_1a68d6118cef94eb973cfa1591ea890e3f)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dummy)` | Get all skills.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classMe_1a8319dc883867a8e9f6cc101ecbee0aa5)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSkillId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nExt)` | Calls D2COMMON_GetSkillLevel and returns the result.
`public `[`Unit`](#classUnit)` `[`getParent`](#classMe_1a211afa5299fc94407dc2a6d78ebadd8c)`()` | Gets the parent of a unit.
`public String `[`getParent`](#classMe_1a4019ee0bef41f98dd4170a205de08cd7)`()` | Gets the parent of a unit.
`public void `[`overhead`](#classMe_1a6f5c4067c0304c88ab5105b93e787f7d)`(Object message)` | Puts the string equivalent of message over the unit.
`public void `[`revive`](#classMe_1a7e53744fc9cd8233451fa8562e4ce7e9)`()` | Revive the character.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getFlags`](#classMe_1a2901a55f39537ba49f5c90cfb8efe1a3)`()` | Returns the item flags.
`public double `[`getStat`](#classMe_1a1d7999f11e2a07f70dc69432b06ba782)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` | Get a stat by stat id and sub index.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getStat`](#classMe_1a95d5d3cf98c32092985203abcadb172d)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` | Get a stat by stat id and sub index.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getStat`](#classMe_1a34c73953d580d9eae5a32d67d26a7ea0)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` | Get an array of all the stats of the item.
`public bool `[`getState`](#classMe_1a6a8f7eed0b6808691957c24f79f8e111)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nState)` | TODO: Handle getStat(-2);.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classMe_1ab11bd84870974d2573c76661841b4584)`(`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell)` | Get the price of the item at a given npc, with choice of buying or selling, in the current difficulty.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classMe_1a3d5496648a0727819638f23c7a4eb271)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` npcId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell)` | Get the price of the item at a given npc (by id), which choice of buying or selling, in the current difficulty.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classMe_1a5242237cafb7693f78ac1f3e250fd113)`(`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` difficulty)` | Get the price of the item at a given npc, with choice of buying or selling, in a given difficulty.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classMe_1ae9a1131724c2be79d5b23fb695594774)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` npcId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` difficulty)` | Get the price of the item at a given npc (by id), with choice of buying or selling, in a given difficulty.
`public bool `[`getEnchant`](#classMe_1a2b35f9abde10c9fe6ba08b6e2c31ee3c)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nEnchant)` | Determine whether or not a unit has a given enchant.
`public bool `[`shop`](#classMe_1a3469ed7606e573d7e09e197999ae494e)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwMode)` | Shop with a given npc, either buying or selling.
`public bool `[`setSkill`](#classMe_1aa6e655c613c557c0ef44cfb8ad536cde)`(String skillName,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand)` | Set the skill on the given hand to be skill with name skillName.
`public bool `[`setSkill`](#classMe_1aa8850569751822ba3088f40bfd94584a)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSkillId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand)` | Set the skill on the given hand to be skill with id nSkillId.
`public bool `[`setSkill`](#classMe_1af20eafc6d55f4dabcba4fdcf7f8bae40)`(String skillName,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand,`[`Unit`](#classUnit)` item)` | Set the skill on the given hand to be skill with name skillName.
`public bool `[`setSkill`](#classMe_1a10a595cd98b1bb7fcc54bfebdd61ac6c)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSkillId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand,`[`Unit`](#classUnit)` item)` | Set the skill on the given hand to be skill with id nSkillId.
`public void `[`move`](#classMe_1a497c1507b060c2fcbdf79fcb7263ebdd)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y)` | Move to the given location.
`public void `[`move`](#classMe_1a2ab43203c0909238f2b721db7fda48a5)`()` | Move to this unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getQuest`](#classMe_1a9ba75f0259540bc166cf7b8cbdbade86)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nAct,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nQuest)` | Get the quest flag for a quest specified by act and quest number.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getMinionCount`](#classMe_1accccb22ea6e3a2618fe740270374d6e6)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType)` | Get the number of minions of a certain type.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getRepairCost`](#classMe_1a79e916f09dcbe81785c07c3c6bb9505f)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId)` | Get price to repair this unit at the current npc given by nNpcClassId.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classMe_1a5589dba170b74d8af4e1c0dd5b176626)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`Unit`](#classUnit)` npc)` | Get the cost to do something (buy, sell, repair) with the given item, at the given npc.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classMe_1abcb1d466bcdac846dbb10c7ba4724caf)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nDifficulty)` | Get the cost to do something (buy, sell, repair) with the given item, at the given npc, in the given difficulty.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classMe_1ad2deea07e13b5acaa68d0c09bbe75698)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId)` | Get the cost to do something (buy, sell, repair) with the given item, at the given npc.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classMe_1a81997bd2784832f7e1a88863483e0289)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nDifficulty)` | Get the cost to do something (buy, sell, repair) with the given item, at the given npc, in the given difficulty.

## Members

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`type`](#classMe_1a52c5b4db63a7b8446dc8107fc07cdf3d) {#classMe_1a52c5b4db63a7b8446dc8107fc07cdf3d}

The type of the unit.

0 - Player

1 - NPC

2 - Object

3 - Missile

4 - Item

5 - Warp

Source: botNET

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`classId`](#classMe_1afc46c25e98a712ddbab9fe5b1895c581) {#classMe_1afc46c25e98a712ddbab9fe5b1895c581}

The class id of the object.

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=1002](http://forums.d2botnet.org/viewtopic.php?f=18&t=1002)

[http://forums.d2botnet.org/viewtopic.php?f=18&t=986](http://forums.d2botnet.org/viewtopic.php?f=18&t=986) and

[http://forums.d2botnet.org/viewtopic.php?f=18&t=985](http://forums.d2botnet.org/viewtopic.php?f=18&t=985)

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mode`](#classMe_1aaaa649505660616f54b0ee92776a25b8) {#classMe_1aaaa649505660616f54b0ee92776a25b8}

The mode of the unit.

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=988](http://forums.d2botnet.org/viewtopic.php?f=18&t=988)

#### `public String `[`name`](#classMe_1a7a79209dc7ba4388f1a0b0948e1809c2) {#classMe_1a7a79209dc7ba4388f1a0b0948e1809c2}

The name of the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mapid`](#classMe_1aeca5382b1726287c31235f5cc9d4d22d) {#classMe_1aeca5382b1726287c31235f5cc9d4d22d}

The seed used to create the map.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`act`](#classMe_1a9ac2b33c84c6cd3b15afa9b42929fc3f) {#classMe_1a9ac2b33c84c6cd3b15afa9b42929fc3f}

The act where the unit is currently located.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`gid`](#classMe_1a1c9269b25de87db3987394c129ef4416) {#classMe_1a1c9269b25de87db3987394c129ef4416}

The unit unique id.

Referred to simply as the unit id. Used along with the unit type to uniquely identify the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classMe_1a6e1986e643022cf0768b14b83f14d01b) {#classMe_1a6e1986e643022cf0768b14b83f14d01b}

The x location of the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classMe_1aa554298f46bbfaf83a341b5e3d86b2e5) {#classMe_1aa554298f46bbfaf83a341b5e3d86b2e5}

The y location of the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`targetx`](#classMe_1ae57bbfa40548f63d807ec5ead0301024) {#classMe_1ae57bbfa40548f63d807ec5ead0301024}

The target x location of the unit.

Where the game is taking the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`targety`](#classMe_1afe98390a5d4f85c8acd10b6312616c7f) {#classMe_1afe98390a5d4f85c8acd10b6312616c7f}

The target y location of the unit.

Where the game is taking the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`area`](#classMe_1a20c97fb4d7a65f1125b2ef94edc93382) {#classMe_1a20c97fb4d7a65f1125b2ef94edc93382}

The id of the area (level) the unit is located in.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`hp`](#classMe_1ada4675cf13005bce0c1562c903dc44c5) {#classMe_1ada4675cf13005bce0c1562c903dc44c5}

The unit's current health.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`hpmax`](#classMe_1a76936aa550e766f03719a350a0166a08) {#classMe_1a76936aa550e766f03719a350a0166a08}

The unit's maximum health.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mp`](#classMe_1a2818fdee3d22e50df4d044294978efc4) {#classMe_1a2818fdee3d22e50df4d044294978efc4}

The unit's current mana.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mpmax`](#classMe_1aff3b5b0dd48925f742d96385f0cc3391) {#classMe_1aff3b5b0dd48925f742d96385f0cc3391}

The unit's maximum mana.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`stamina`](#classMe_1ab53e765f014b5a962dc0cf0374d61047) {#classMe_1ab53e765f014b5a962dc0cf0374d61047}

The unit's current stamina.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`staminamax`](#classMe_1a27dc070bdfcf26014c8e05f8c3d45d54) {#classMe_1a27dc070bdfcf26014c8e05f8c3d45d54}

The unit's maximum stamina.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`charlvl`](#classMe_1ad1de73d82c060287cddb8c5e111c4763) {#classMe_1ad1de73d82c060287cddb8c5e111c4763}

The character level.

The level that determines stat points, skill levels, etc.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`itemcount`](#classMe_1ad1ccf5dc94d072c2ceb7b505868e2058) {#classMe_1ad1ccf5dc94d072c2ceb7b505868e2058}

The number of items in inventory.

#### `public double `[`owner`](#classMe_1a3322befee99b6afa964c5f8ee52983d2) {#classMe_1a3322befee99b6afa964c5f8ee52983d2}

The unit id of the owner of the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ownertype`](#classMe_1a6f9f7bbef6962920fe9306a620f204b6) {#classMe_1a6f9f7bbef6962920fe9306a620f204b6}

The type of owner.

[type](#classMe_1a52c5b4db63a7b8446dc8107fc07cdf3d)

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`spectype`](#classMe_1ad244e2f81cefed6a58bc2b3aed36b9f3) {#classMe_1ad244e2f81cefed6a58bc2b3aed36b9f3}

The special type of the unit.

Represents things like unique, minion, boss, etc.

1 - "Normal" Boss 2 - Champion 4 - Boss 8 - Minion

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`direction`](#classMe_1a6ee239b2452d3c06e33de7e1725be36a) {#classMe_1a6ee239b2452d3c06e33de7e1725be36a}

The direction of the unit.

> Todo: Figure out what the direction is.

#### `public String `[`code`](#classMe_1aa90bcab94a360d2e8380323d8b4640cf) {#classMe_1aa90bcab94a360d2e8380323d8b4640cf}

The three digit code for an item.

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=991](http://forums.d2botnet.org/viewtopic.php?f=18&t=991)

#### `public String `[`prefix`](#classMe_1ab68062a31f250f249221a399c541b5e8) {#classMe_1ab68062a31f250f249221a399c541b5e8}

The magic prefix of the item.

#### `public String `[`suffix`](#classMe_1a3633bb215e73eda5916b9c0f372d1f80) {#classMe_1a3633bb215e73eda5916b9c0f372d1f80}

The magic suffix of the item.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`prefixnum`](#classMe_1ae54c6d4c87d2ad0f7f1c9a6b1f4381fc) {#classMe_1ae54c6d4c87d2ad0f7f1c9a6b1f4381fc}

The id code for the magic prefix.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`suffixnum`](#classMe_1a3d523157c13fcf3229ecc1b9d7724367) {#classMe_1a3d523157c13fcf3229ecc1b9d7724367}

The id code for the magic suffix.

#### `public String `[`fname`](#classMe_1a756f0b6b2b2b5f2439d1afe17e9d23ca) {#classMe_1a756f0b6b2b2b5f2439d1afe17e9d23ca}

The full name of an item.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`quality`](#classMe_1ace5f9a9c6a8139fbe30ca258e2f1bdc5) {#classMe_1ace5f9a9c6a8139fbe30ca258e2f1bdc5}

The item quality.

1 - Low quality

2 - Normal

3 - Superior

4 - Magic

5 - Set

6 - Rare

7 - Unique

8 - Crafted

Source: botNET

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`node`](#classMe_1a71440306ac4fa9414da959b615f24200) {#classMe_1a71440306ac4fa9414da959b615f24200}

No clue.

> Todo: Get a clue.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`location`](#classMe_1a8932e926ae2bd373885fd45b2ef78907) {#classMe_1a8932e926ae2bd373885fd45b2ef78907}

The location of the item (ground, inventory, stash, etc.).

0 - Ground

1 - Equipped

2 - Belt

3 - Inventory

4 - Store

5 - Trade

6 - Cube

7 - Stash

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sizex`](#classMe_1a2a1356d1bb2c3fdbda515446a06b626f) {#classMe_1a2a1356d1bb2c3fdbda515446a06b626f}

The x size of the item.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sizey`](#classMe_1ad5a059256862e2a27e4473f299c1c2a0) {#classMe_1ad5a059256862e2a27e4473f299c1c2a0}

The y size of the item.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`itemType`](#classMe_1a5cbdd81b5607c8098994228fe5ab7151) {#classMe_1a5cbdd81b5607c8098994228fe5ab7151}

The type of the item.

> Todo: Put together a reference for item type.

#### `public String `[`description`](#classMe_1a52e690a6c8b7786a7bc56f400a96c4f4) {#classMe_1a52e690a6c8b7786a7bc56f400a96c4f4}

The description of the item.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`bodylocation`](#classMe_1aa895c745c9f4f909986ddbacd7d31e73) {#classMe_1aa895c745c9f4f909986ddbacd7d31e73}

The equipped location of the item.

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

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ilvl`](#classMe_1a742c6b149eeaafd2e947662a2a7a3c61) {#classMe_1a742c6b149eeaafd2e947662a2a7a3c61}

Item level.

Used for things like item stat rolling.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`runwalk`](#classMe_1ab3fd8214e6809542ea1b99f0a2cd2929) {#classMe_1ab3fd8214e6809542ea1b99f0a2cd2929}

Whether the controlled character is in the always run mode or not.

0 - Walk unless directed to run 1 - Always run

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`weaponswitch`](#classMe_1adb2a8033d013320f821b7afefab5749a) {#classMe_1adb2a8033d013320f821b7afefab5749a}

Set the weapon switch.

#### `public String `[`account`](#classMe_1a73c79f2cf49747d6171827f6d6bcbe24) {#classMe_1a73c79f2cf49747d6171827f6d6bcbe24}

The account name used to log on to the account.

#### `public String `[`charname`](#classMe_1a3aafeeae1d507aa6492fdfd14d44fc6a) {#classMe_1a3aafeeae1d507aa6492fdfd14d44fc6a}

The character name.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`diff`](#classMe_1adddc240680097fd939d1afba7a1661cf) {#classMe_1adddc240680097fd939d1afba7a1661cf}

The difficulty of the game.

0 - Normal

1 - Nightmare

2 - Hell

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`maxdiff`](#classMe_1afc952d96b2b29fbee19791b2e6234e97) {#classMe_1afc952d96b2b29fbee19791b2e6234e97}

The maximum difficulty available.

See [Me::diff](#classMe_1adddc240680097fd939d1afba7a1661cf) for details.

#### `public String `[`gamename`](#classMe_1a82b4d94b4cf1d7310bb910919347eefd) {#classMe_1a82b4d94b4cf1d7310bb910919347eefd}

The name of the game.

#### `public String `[`gamepassword`](#classMe_1aa872a1fbaa9f8aa85d01963f71813324) {#classMe_1aa872a1fbaa9f8aa85d01963f71813324}

The password of the game.

#### `public String `[`gameserverip`](#classMe_1a3debf45fa879b24fad68925e53256c2b) {#classMe_1a3debf45fa879b24fad68925e53256c2b}

A string representation of the IPv4 address of the game server.

#### `public double `[`gamestarttime`](#classMe_1a2fed13a602e6882f51553b8d4c3042be) {#classMe_1a2fed13a602e6882f51553b8d4c3042be}

Some sort of representation of the start time of the game.

> Todo: Figure out what this represents.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`gametype`](#classMe_1ad31342341ab64e1444961ff1059c8a05) {#classMe_1ad31342341ab64e1444961ff1059c8a05}

The game type, expansion or not.

> Todo: Determine what the values are.

#### `public bool `[`itemoncursor`](#classMe_1abd16276ae4f171422e7185fdc3bb49cc) {#classMe_1abd16276ae4f171422e7185fdc3bb49cc}

Whether or not there is an item on the cursor.

#### `public bool `[`ladder`](#classMe_1ab9d7b4028e92dc9e8e8a124ae434ca82) {#classMe_1ab9d7b4028e92dc9e8e8a124ae434ca82}

Whether or not the game is a ladder game.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ping`](#classMe_1aee8c765131a0ce6a04a5a78198d90910) {#classMe_1aee8c765131a0ce6a04a5a78198d90910}

The ping in milliseconds.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`fps`](#classMe_1a26cbb5b87c79ba3d8fd43e56cce260c7) {#classMe_1a26cbb5b87c79ba3d8fd43e56cce260c7}

The frame rate.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`playertype`](#classMe_1a8cf7291feb3bc8ebeb35dd5baf373427) {#classMe_1a8cf7291feb3bc8ebeb35dd5baf373427}

Whether or not the gametype is hardcore.

#### `public String `[`realm`](#classMe_1a9d5e5a2fec0a033316b6d49073b961d5) {#classMe_1a9d5e5a2fec0a033316b6d49073b961d5}

The realm name.

#### `public String `[`realmshort`](#classMe_1aa8bdeb8ae3ba0db767a64f84ba489094) {#classMe_1aa8bdeb8ae3ba0db767a64f84ba489094}

The short realm name.

> Todo: Determine the difference between this and realm.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mercrevivecost`](#classMe_1a913adbc2fce146ef6c9f5268a76ebfc5) {#classMe_1a913adbc2fce146ef6c9f5268a76ebfc5}

The cost to revive the merc.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`chickenhp`](#classMe_1a215c51bfd214de4bff2eeefdc5ecd5ab) {#classMe_1a215c51bfd214de4bff2eeefdc5ecd5ab}

The health at which to chicken if the character drops below.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`chickenmp`](#classMe_1a7e95aede9d9b33b217e2c74b0aed9865) {#classMe_1a7e95aede9d9b33b217e2c74b0aed9865}

The mana at which to chicken if the character drops below.

#### `public bool `[`quitonhostile`](#classMe_1a2b52680cdbc8a340cf1b83a11f288e9a) {#classMe_1a2b52680cdbc8a340cf1b83a11f288e9a}

Whether to chicken if another player hostiles the controlled character.

#### `public bool `[`blockKeys`](#classMe_1a32b0fe4966c613767100bca03d4cff54) {#classMe_1a32b0fe4966c613767100bca03d4cff54}

Block keys...

> Todo: Determine what this means.

#### `public bool `[`blockMouse`](#classMe_1aa9360f70984b69d889ca7744a977d031) {#classMe_1aa9360f70984b69d889ca7744a977d031}

Block mouse...

> Todo: Determine what this means.

#### `public bool `[`gameReady`](#classMe_1adbf3d1e8b502d34c5f6895bb2c40f1d8) {#classMe_1adbf3d1e8b502d34c5f6895bb2c40f1d8}

Whether or not the game window is in the game.

#### `public String `[`profile`](#classMe_1a5321127db8f2c6ca21d1428fd753157d) {#classMe_1a5321127db8f2c6ca21d1428fd753157d}

The profile currently being used.

#### `public bool `[`nopickup`](#classMe_1a0a3973ed5dae29cbfe95dc7745646004) {#classMe_1a0a3973ed5dae29cbfe95dc7745646004}

Whether the game is set to not pick up items or not.

#### `public double `[`pid`](#classMe_1ad10c9c74976842a1f9634410ad833744) {#classMe_1ad10c9c74976842a1f9634410ad833744}

The process id of Diablo II.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`screensize`](#classMe_1acf69e064892375059446599a1494fea6) {#classMe_1acf69e064892375059446599a1494fea6}

The window size.

> Todo: Determine what the numbers mean.

#### `public String `[`windowtitle`](#classMe_1ae1fb424ddea108a0894dddafae0febbd) {#classMe_1ae1fb424ddea108a0894dddafae0febbd}

The window title.

#### `public bool `[`ingame`](#classMe_1a92d8763c52f3ac2ec1d680bd026e2404) {#classMe_1a92d8763c52f3ac2ec1d680bd026e2404}

True if the game is not at menu.

> Todo: Determine when this is different from gameReady. Maybe when going between acts for instance.

#### `public bool `[`quitonerror`](#classMe_1a57806876c33f36d3bcc1ca4599fe60be) {#classMe_1a57806876c33f36d3bcc1ca4599fe60be}

Whether or not to quit when there's an error.

> Todo: Figure out if this means js errors.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`maxgametime`](#classMe_1ad4f57667eb1a3bd8e45288c9f3fe923a) {#classMe_1ad4f57667eb1a3bd8e45288c9f3fe923a}

The max time in milliseconds to stay in game before the game auto-quits.

#### `public bool `[`getNext`](#classMe_1ac38694e80aec8caa323c50785816bcbd)`()` {#classMe_1ac38694e80aec8caa323c50785816bcbd}

Get the next unit that matches the originally given name or class id and originally specified mode.

#### Returns
Whether another unit was found.

#### `public bool `[`getNext`](#classMe_1a978176a65b1a7d182cee4fb9384cb626)`(String szName)` {#classMe_1a978176a65b1a7d182cee4fb9384cb626}

Get the next unit that matches the given name and originally specified mode.

#### Parameters
* `szName` The name to look for.

#### Returns
Whether another unit was found.

#### `public bool `[`getNext`](#classMe_1afb7f7bf695192c13ab56b2fbe29f743e)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwClassId)` {#classMe_1afb7f7bf695192c13ab56b2fbe29f743e}

Get the next unit that matches the given class id and originally specified mode.

#### Parameters
* `dwClassId` The class id to look for.

#### Returns
Whether another unit was found.

#### `public bool `[`getNext`](#classMe_1a02f641e81f28741b2bef50c16d3372da)`(String szName,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwMode)` {#classMe_1a02f641e81f28741b2bef50c16d3372da}

Get the next unit that matches the given name and mode.

#### Parameters
* `szName` The name to look for.

* `dwMode` Either the mode being searched for, or a bitmask with bit 29 set and bits 0-28 corresponding to modes of units being searched for.

#### Returns
Whether another unit was found.

#### `public bool `[`getNext`](#classMe_1a12feab5ac7792369015564b222441acd)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwClassId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwMode)` {#classMe_1a12feab5ac7792369015564b222441acd}

Get the next unit that matches the given class id and mode.

#### Parameters
* `dwClassId` The class id to look for.

* `dwMode` Either the mode being searched for, or a bitmask with bit 29 set and bits 0-28 corresponding to modes of units being searched for.

#### Returns
Whether another unit was found.

#### `public void `[`cancel`](#classMe_1a3d6d506ed810276b50ba86f9c3f4dd98)`()` {#classMe_1a3d6d506ed810276b50ba86f9c3f4dd98}

Cancel some form of interaction.

If there is scrolling text, cancel it. If you are interacting with an NPC, stop interacting. If you have an item on your cursor, drop it. Otherwise call D2CLIENT_CloseInteract.

#### `public bool `[`repair`](#classMe_1ab3612cb5a103004b87a9321b5a7aec50)`()` {#classMe_1ab3612cb5a103004b87a9321b5a7aec50}

Try to repair.

Need to be able to find unit that you're trying to repair with. That means the unit needs to still be in the server unit hash table.

#### Returns
true if successful.

#### `public bool `[`useMenu`](#classMe_1aa29c5eccaa458901d4ec804e4fa167ca)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` menuItem)` {#classMe_1aa29c5eccaa458901d4ec804e4fa167ca}

Use an NPC menu.

Need to be able to find unit that you're trying to repair with. That means the unit needs to still be in the server unit hash table.

#### Parameters
* `menuItem` Index of the menu item to click.

#### Returns
true if menu was found.

#### `public bool `[`interact`](#classMe_1a3341b12f791fa69c7ba048cc90778f20)`()` {#classMe_1a3341b12f791fa69c7ba048cc90778f20}

Interact with the unit.

If the unit is an item in inventory pick it up. Otherwise click it on the map.

#### `public bool `[`interact`](#classMe_1a4742f918ff80aa898da57756b1a95fbd)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` destId)` {#classMe_1a4742f918ff80aa898da57756b1a95fbd}

Interact with a waypoint.

If the unit is an object, assume it's a waypoint, and take it.

#### Parameters
* `destId` The area id of the destination to select.

#### `public `[`Unit`](#classUnit)` `[`getItem`](#classMe_1a9b55ad2bca33e8dd2c0aaeb38a19ec9b)`(String name,uint32_t mode,uint32_t nUnitId)` {#classMe_1a9b55ad2bca33e8dd2c0aaeb38a19ec9b}

Get an item from inventory by name, mode and nUnitId.

#### Parameters
* `name` The name of the unit to look for.

* `mode` Either the mode being searched for, or a bitmask with bit 29 set and bits 0-28 corresponding to modes of units being searched for.

* `nUnitId` The unique id of the unit.

#### Returns
The first item found that matches the description.

#### `public `[`Unit`](#classUnit)` `[`getItem`](#classMe_1ab6f23ff824a12c87b1bb6b2a046f907b)`(uint32_t classId,uint32_t mode,uint32_t nUnitId)` {#classMe_1ab6f23ff824a12c87b1bb6b2a046f907b}

Get an item from inventory by classId, mode and nUnitId.

#### Parameters
* `classId` The class id of the unit.

* `mode` Either the mode being searched for, or a bitmask with bit 29 set and bits 0-28 corresponding to modes of units being searched for.

* `nUnitId` The unique id of the unit.

#### Returns
The first item found that matches the description.

#### `public `[`Unit`](#classUnit)` `[`getItems`](#classMe_1aa3a172ada3c1e477299cf697f3722076)`()` {#classMe_1aa3a172ada3c1e477299cf697f3722076}

Get all items from inventory.

#### Returns
An array of all the items from inventory.

#### `public `[`Unit`](#classUnit)` `[`getMerc`](#classMe_1a12c1ae747f947cc96bcda92d517e4fd4)`()` {#classMe_1a12c1ae747f947cc96bcda92d517e4fd4}

Get a player's merc.

The unit being operated on should be a player.

#### Returns
The merc if there is one, null otherwise.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getMercHP`](#classMe_1a8b9d83bd2cc1d39c89c47c2f3d97f398)`()` {#classMe_1a8b9d83bd2cc1d39c89c47c2f3d97f398}

Get the merc's HP.

The reported HP is a percentage.

#### Returns
The merc's HP percentage.

#### `public String `[`getSkill`](#classMe_1a449dad9a671272e94c7df7ab07277043)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` hand)` {#classMe_1a449dad9a671272e94c7df7ab07277043}

Get skill name from hand.

#### Parameters
* `hand` Hand to get the skill name off.

0 - Right hand

1 - Left hand

#### Returns
Skill name.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classMe_1a482e347e3d2131af87a6aca7019bf4fd)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` hand)` {#classMe_1a482e347e3d2131af87a6aca7019bf4fd}

Get skill id from hand.

#### Parameters
* `hand` Hand to get the skill id off.

2 - Right hand

3 - Left hand

#### Returns
Skill id.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classMe_1a68d6118cef94eb973cfa1591ea890e3f)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dummy)` {#classMe_1a68d6118cef94eb973cfa1591ea890e3f}

Get all skills.

Gets all skill ids, along with corresponding base and total skill levels.

#### Parameters
* `dummy` Should be 4.

#### Returns
An array of arrays of integers. Inside the inner array the 0th index is the skill id, the 1st index is the base skill level and the 2nd index is the total skill level. Only the first 256 skills are read.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classMe_1a8319dc883867a8e9f6cc101ecbee0aa5)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSkillId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nExt)` {#classMe_1a8319dc883867a8e9f6cc101ecbee0aa5}

Calls D2COMMON_GetSkillLevel and returns the result.

> Todo: Figure out what D2COMMON_GetSkillLevel does.

#### Returns
Whatever D2COMMON_GetSkillLevel returns.

#### `public `[`Unit`](#classUnit)` `[`getParent`](#classMe_1a211afa5299fc94407dc2a6d78ebadd8c)`()` {#classMe_1a211afa5299fc94407dc2a6d78ebadd8c}

Gets the parent of a unit.

This function is used for monster and item units.

#### Returns
The parent unit.

#### `public String `[`getParent`](#classMe_1a4019ee0bef41f98dd4170a205de08cd7)`()` {#classMe_1a4019ee0bef41f98dd4170a205de08cd7}

Gets the parent of a unit.

This function is used for object units.

#### Returns
The parent's name.

#### `public void `[`overhead`](#classMe_1a6f5c4067c0304c88ab5105b93e787f7d)`(Object message)` {#classMe_1a6f5c4067c0304c88ab5105b93e787f7d}

Puts the string equivalent of message over the unit.

#### `public void `[`revive`](#classMe_1a7e53744fc9cd8233451fa8562e4ce7e9)`()` {#classMe_1a7e53744fc9cd8233451fa8562e4ce7e9}

Revive the character.

BE CAREFUL! This function directly sends packets without checks. If you call this function and are not dead, you might get flagged/banned.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getFlags`](#classMe_1a2901a55f39537ba49f5c90cfb8efe1a3)`()` {#classMe_1a2901a55f39537ba49f5c90cfb8efe1a3}

Returns the item flags.

#### Returns
Item flags:

0x00000001 - Equipped

0x00000008 - In socket

0x00000010 - Identified

0x00000040 - Weapon/shield is in the active weapon switch

0x00000080 - Weapon/shield is in the inactive weapon switch

0x00000100 - Item is broken

0x00000400 - Full rejuv

0x00000800 - Socketed

0x00002000 - In the trade or gamble screen

0x00004000 - Not in a socket

0x00010000 - Is an ear

0x00020000 - A starting item (worth only 1 gold)

0x00200000 - Rune, or potion, or mephisto's soulstone

0x00400000 - Ethereal

0x00800000 - Is an item

0x01000000 - Personalized

0x04000000 - Runeword

Source: [http://subversion.assembla.com/svn/d2bs/scripts/YAMB/libs/YAMB/common/YAM-Common.dbl](http://subversion.assembla.com/svn/d2bs/scripts/YAMB/libs/YAMB/common/YAM-Common.dbl) r1086

#### `public double `[`getStat`](#classMe_1a1d7999f11e2a07f70dc69432b06ba782)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` {#classMe_1a1d7999f11e2a07f70dc69432b06ba782}

Get a stat by stat id and sub index.

Used for every stat except 6-11.

#### Parameters
* `nStat` The stat type. See [http://forums.d2botnet.org/viewtopic.php?f=18&t=989](http://forums.d2botnet.org/viewtopic.php?f=18&t=989)

* `nSubIndex` A subindex to a certain type of stat. For instance a specific skill for the +1 to skill tab stat.

#### Returns
The stat value.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getStat`](#classMe_1a95d5d3cf98c32092985203abcadb172d)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` {#classMe_1a95d5d3cf98c32092985203abcadb172d}

Get a stat by stat id and sub index.

Used for stats 6-11.

#### Parameters
* `nStat` The stat type. See [http://forums.d2botnet.org/viewtopic.php?f=18&t=989](http://forums.d2botnet.org/viewtopic.php?f=18&t=989)

* `nSubIndex` A subindex to a certain type of stat. For instance a specific skill for the +1 to skill tab stat.

#### Returns
The stat value.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getStat`](#classMe_1a34c73953d580d9eae5a32d67d26a7ea0)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` {#classMe_1a34c73953d580d9eae5a32d67d26a7ea0}

Get an array of all the stats of the item.

#### Parameters
* `nStat` Set to -1.

* `nSubIndex` Ignored.

#### Returns
An array of the first 64 stats. The indices of the inner array are: 0 - nStat, 1 - nSubIndex, 2 - nValue.

#### `public bool `[`getState`](#classMe_1a6a8f7eed0b6808691957c24f79f8e111)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nState)` {#classMe_1a6a8f7eed0b6808691957c24f79f8e111}

TODO: Handle getStat(-2);.

Return whether or not the unit has a given state.

#### Parameters
* `nState` The state id.

#### Returns
Whether or not the unit has the state.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classMe_1ab11bd84870974d2573c76661841b4584)`(`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell)` {#classMe_1ab11bd84870974d2573c76661841b4584}

Get the price of the item at a given npc, with choice of buying or selling, in the current difficulty.

> Deprecated: Use getItemCost instead.

> Todo: Determine the meaning of "buysell".

#### Parameters
* `npc` The npc to determine the price at.

* `buysell` Unknown

#### Returns
The price requested.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classMe_1a3d5496648a0727819638f23c7a4eb271)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` npcId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell)` {#classMe_1a3d5496648a0727819638f23c7a4eb271}

Get the price of the item at a given npc (by id), which choice of buying or selling, in the current difficulty.

> Deprecated: Use getItemCost instead.

> Todo: Determine the meaning of "buysell".

#### Parameters
* `npcId` The id of the npc to determine the price at.

* `buysell` Unknown

#### Returns
The price requested.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classMe_1a5242237cafb7693f78ac1f3e250fd113)`(`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` difficulty)` {#classMe_1a5242237cafb7693f78ac1f3e250fd113}

Get the price of the item at a given npc, with choice of buying or selling, in a given difficulty.

> Deprecated: Use getItemCost instead.

> Todo: Determine the meaning of "buysell".

#### Parameters
* `npc` The npc to determine the price at.

* `buysell` Unknown

* `difficulty` The difficulty of interest: 0 - normal, 1 - nightmare, 2 - hell

#### Returns
The price requested.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classMe_1ae9a1131724c2be79d5b23fb695594774)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` npcId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` difficulty)` {#classMe_1ae9a1131724c2be79d5b23fb695594774}

Get the price of the item at a given npc (by id), with choice of buying or selling, in a given difficulty.

> Deprecated: Use getItemCost instead.

> Todo: Determine the meaning of "buysell".

#### Parameters
* `npcId` The id of the npc to determine the price at.

* `buysell` Unknown

* `difficulty` The difficulty of interest: 0 - normal, 1 - nightmare, 2 - hell

#### Returns
The price requested.

#### `public bool `[`getEnchant`](#classMe_1a2b35f9abde10c9fe6ba08b6e2c31ee3c)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nEnchant)` {#classMe_1a2b35f9abde10c9fe6ba08b6e2c31ee3c}

Determine whether or not a unit has a given enchant.

#### Parameters
* `nEnchant` Enchantment id.

#### Returns
Whether or not the unit has the enchantment.

#### `public bool `[`shop`](#classMe_1a3469ed7606e573d7e09e197999ae494e)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwMode)` {#classMe_1a3469ed7606e573d7e09e197999ae494e}

Shop with a given npc, either buying or selling.

#### Parameters
* `dwMode` What to do with the item. 1 - Sell, 2 - Buy, 6 - ?

#### Returns
Whether or not the shop went through.

#### `public bool `[`setSkill`](#classMe_1aa6e655c613c557c0ef44cfb8ad536cde)`(String skillName,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand)` {#classMe_1aa6e655c613c557c0ef44cfb8ad536cde}

Set the skill on the given hand to be skill with name skillName.

Waits up to one second for the skill to be set.

> Todo: Fix argc < 1, should be argc < 2

#### Parameters
* `skillName` Name of the skill to put up.

* `nHand` Hand to put the skill on. non-zero left, 0 - right.

#### Returns
Whether operation was successful.

#### `public bool `[`setSkill`](#classMe_1aa8850569751822ba3088f40bfd94584a)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSkillId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand)` {#classMe_1aa8850569751822ba3088f40bfd94584a}

Set the skill on the given hand to be skill with id nSkillId.

Waits up to one second for the skill to be set.

> Todo: Fix argc < 1, should be argc < 2

#### Parameters
* `nSkillId` Id of the skill to put up.

* `nHand` Hand to put the skill on. non-zero left, 0 - right.

#### Returns
Whether operation was successful.

#### `public bool `[`setSkill`](#classMe_1af20eafc6d55f4dabcba4fdcf7f8bae40)`(String skillName,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand,`[`Unit`](#classUnit)` item)` {#classMe_1af20eafc6d55f4dabcba4fdcf7f8bae40}

Set the skill on the given hand to be skill with name skillName.

Waits up to one second for the skill to be set.

> Todo: Fix argc < 1, should be argc < 2

#### Parameters
* `skillName` Name of the skill to put up.

* `nHand` Hand to put the skill on. non-zero left, 0 - right.

* `item` The item that the skill is attached to.

#### Returns
Whether operation was successful.

#### `public bool `[`setSkill`](#classMe_1a10a595cd98b1bb7fcc54bfebdd61ac6c)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSkillId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand,`[`Unit`](#classUnit)` item)` {#classMe_1a10a595cd98b1bb7fcc54bfebdd61ac6c}

Set the skill on the given hand to be skill with id nSkillId.

Waits up to one second for the skill to be set.

> Todo: Fix argc < 1, should be argc < 2

#### Parameters
* `nSkillId` Id of the skill to put up.

* `nHand` Hand to put the skill on. non-zero left, 0 - right.

* `item` The item that the skill is attached to.

#### Returns
Whether operation was successful.

#### `public void `[`move`](#classMe_1a497c1507b060c2fcbdf79fcb7263ebdd)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y)` {#classMe_1a497c1507b060c2fcbdf79fcb7263ebdd}

Move to the given location.

#### Parameters
* `x` The x location.

* `y` The y location.

#### `public void `[`move`](#classMe_1a2ab43203c0909238f2b721db7fda48a5)`()` {#classMe_1a2ab43203c0909238f2b721db7fda48a5}

Move to this unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getQuest`](#classMe_1a9ba75f0259540bc166cf7b8cbdbade86)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nAct,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nQuest)` {#classMe_1a9ba75f0259540bc166cf7b8cbdbade86}

Get the quest flag for a quest specified by act and quest number.

#### Parameters
* `nAct` The act of the quest.

* `nQuest` The quest number.

#### Returns
The quest flag for the specified quest.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getMinionCount`](#classMe_1accccb22ea6e3a2618fe740270374d6e6)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType)` {#classMe_1accccb22ea6e3a2618fe740270374d6e6}

Get the number of minions of a certain type.

#### Parameters
* `nType` The type of the minions.

#### Returns
The number of minions of the specified type.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getRepairCost`](#classMe_1a79e916f09dcbe81785c07c3c6bb9505f)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId)` {#classMe_1a79e916f09dcbe81785c07c3c6bb9505f}

Get price to repair this unit at the current npc given by nNpcClassId.

#### Parameters
* `nNpcClassId` The class id of the npc to get the price for repair at.

#### Returns
The price to repair the given unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classMe_1a5589dba170b74d8af4e1c0dd5b176626)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`Unit`](#classUnit)` npc)` {#classMe_1a5589dba170b74d8af4e1c0dd5b176626}

Get the cost to do something (buy, sell, repair) with the given item, at the given npc.

#### Parameters
* `nMode` What to do: 0 - buy, 1 - sell, 2 - repair.

* `npc` The npc to check the price with.

#### Returns
The price.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classMe_1abcb1d466bcdac846dbb10c7ba4724caf)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nDifficulty)` {#classMe_1abcb1d466bcdac846dbb10c7ba4724caf}

Get the cost to do something (buy, sell, repair) with the given item, at the given npc, in the given difficulty.

#### Parameters
* `nMode` What to do: 0 - buy, 1 - sell, 2 - repair.

* `npc` The npc to check the price with.

* `nDifficulty` The difficulty to check the price in.

#### Returns
The price.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classMe_1ad2deea07e13b5acaa68d0c09bbe75698)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId)` {#classMe_1ad2deea07e13b5acaa68d0c09bbe75698}

Get the cost to do something (buy, sell, repair) with the given item, at the given npc.

#### Parameters
* `nMode` What to do: 0 - buy, 1 - sell, 2 - repair.

* `nNpcClassId` The class id of the npc to check the price with.

#### Returns
The price.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classMe_1a81997bd2784832f7e1a88863483e0289)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nDifficulty)` {#classMe_1a81997bd2784832f7e1a88863483e0289}

Get the cost to do something (buy, sell, repair) with the given item, at the given npc, in the given difficulty.

#### Parameters
* `nMode` What to do: 0 - buy, 1 - sell, 2 - repair.

* `nNpcClassId` The class id of the npc to check the price with.

* `nDifficulty` The difficulty to check the price in.

#### Returns
The price.

# class `Party` {#classParty}

Represents the items in the list in the [Party](#classParty) screen.

Also called a RosterUnit.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classParty_1a2152cde81a80e8292d45a02cf5fd1f81) | The x coordinate of the location of the RosterUnit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classParty_1a7b27f3dc2f2cf8428bcf88369f974644) | The y coordinate of the location of the RosterUnit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`area`](#classParty_1a673a0ec1ad99bdc49b0cab8fed947876) | The [Area](#classArea) ID of the RosterUnit.
`public double `[`gid`](#classParty_1a00ed094a817469dfb8cbdebabcdd95a7) | The unique id of the RosterUnit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`life`](#classParty_1a61a88341743f372a3b9556e528c7403c) | The life of the RosterUnit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`partyflag`](#classParty_1aed25455e977af2f00d59dc34bae5adab) | The [Party](#classParty) flags of the RosterUnit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`partyid`](#classParty_1abc7e22a4373225cef75b49598ae4ef10) | The [Party](#classParty) ID.
`public String `[`name`](#classParty_1a82db2ed7f8d2d3e5ed7dfb1210098d57) | The name of the RosterUnit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`classid`](#classParty_1ac5ec74e94715df07ca680b1247074627) | The class ID of the RosterUnit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`level`](#classParty_1ad32c6abaa6e2f25660b7e00a12f1c7a4) | The character level of the RosterUnit.
`public void `[`getNext`](#classParty_1a1f0c9289dac815268bc3662a477aa397)`()` | Move to the next RosterUnit.

## Members

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classParty_1a2152cde81a80e8292d45a02cf5fd1f81) {#classParty_1a2152cde81a80e8292d45a02cf5fd1f81}

The x coordinate of the location of the RosterUnit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classParty_1a7b27f3dc2f2cf8428bcf88369f974644) {#classParty_1a7b27f3dc2f2cf8428bcf88369f974644}

The y coordinate of the location of the RosterUnit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`area`](#classParty_1a673a0ec1ad99bdc49b0cab8fed947876) {#classParty_1a673a0ec1ad99bdc49b0cab8fed947876}

The [Area](#classArea) ID of the RosterUnit.

#### `public double `[`gid`](#classParty_1a00ed094a817469dfb8cbdebabcdd95a7) {#classParty_1a00ed094a817469dfb8cbdebabcdd95a7}

The unique id of the RosterUnit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`life`](#classParty_1a61a88341743f372a3b9556e528c7403c) {#classParty_1a61a88341743f372a3b9556e528c7403c}

The life of the RosterUnit.

> Todo: Determine how one is to get the maximum life of the RosterUnit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`partyflag`](#classParty_1aed25455e977af2f00d59dc34bae5adab) {#classParty_1aed25455e977af2f00d59dc34bae5adab}

The [Party](#classParty) flags of the RosterUnit.

> Todo: Determine the values that this can take on.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`partyid`](#classParty_1abc7e22a4373225cef75b49598ae4ef10) {#classParty_1abc7e22a4373225cef75b49598ae4ef10}

The [Party](#classParty) ID.

> Todo: Determine what a [Party](#classParty) ID is.

#### `public String `[`name`](#classParty_1a82db2ed7f8d2d3e5ed7dfb1210098d57) {#classParty_1a82db2ed7f8d2d3e5ed7dfb1210098d57}

The name of the RosterUnit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`classid`](#classParty_1ac5ec74e94715df07ca680b1247074627) {#classParty_1ac5ec74e94715df07ca680b1247074627}

The class ID of the RosterUnit.

See Unit::classId.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`level`](#classParty_1ad32c6abaa6e2f25660b7e00a12f1c7a4) {#classParty_1ad32c6abaa6e2f25660b7e00a12f1c7a4}

The character level of the RosterUnit.

> Todo: Verify that this level is the character level.

#### `public void `[`getNext`](#classParty_1a1f0c9289dac815268bc3662a477aa397)`()` {#classParty_1a1f0c9289dac815268bc3662a477aa397}

Move to the next RosterUnit.

# class `PresetUnit` {#classPresetUnit}

Represents a [PresetUnit](#classPresetUnit) (a type of [Unit](#classUnit) that is available as soon as the [Area](#classArea) data is available).

> Todo: Determine how location is determine based off roomx, roomy, x, and y.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`type`](#classPresetUnit_1aeb44ea9243dc41da4cfa2796ae14e276) | The type ID.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`roomx`](#classPresetUnit_1ad3178939e97c6a2bcadff92ee6e8dbba) | The room X (?).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`roomy`](#classPresetUnit_1a661012095ec30341597c37e437bc60b0) | The room Y (?).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classPresetUnit_1a52f264129d70ba87ae8e7de714264994) | The X coordinate (?).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classPresetUnit_1a6d875aeb1be7022712bcba59ba256733) | The Y coordinate (?).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`id`](#classPresetUnit_1af1a516a03965b9e23cf2a4ab77bf4f62) | The unique ID of the [PresetUnit](#classPresetUnit).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`level`](#classPresetUnit_1aa3ae3f2724bf489f6341dc905537623f) | The [Area](#classArea) ID of the [Area](#classArea) the [PresetUnit](#classPresetUnit) is in.

## Members

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`type`](#classPresetUnit_1aeb44ea9243dc41da4cfa2796ae14e276) {#classPresetUnit_1aeb44ea9243dc41da4cfa2796ae14e276}

The type ID.

See [Unit::type](#classUnit_1a45243122ae655f50179f96bc831bfb1d).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`roomx`](#classPresetUnit_1ad3178939e97c6a2bcadff92ee6e8dbba) {#classPresetUnit_1ad3178939e97c6a2bcadff92ee6e8dbba}

The room X (?).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`roomy`](#classPresetUnit_1a661012095ec30341597c37e437bc60b0) {#classPresetUnit_1a661012095ec30341597c37e437bc60b0}

The room Y (?).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classPresetUnit_1a52f264129d70ba87ae8e7de714264994) {#classPresetUnit_1a52f264129d70ba87ae8e7de714264994}

The X coordinate (?).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classPresetUnit_1a6d875aeb1be7022712bcba59ba256733) {#classPresetUnit_1a6d875aeb1be7022712bcba59ba256733}

The Y coordinate (?).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`id`](#classPresetUnit_1af1a516a03965b9e23cf2a4ab77bf4f62) {#classPresetUnit_1af1a516a03965b9e23cf2a4ab77bf4f62}

The unique ID of the [PresetUnit](#classPresetUnit).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`level`](#classPresetUnit_1aa3ae3f2724bf489f6341dc905537623f) {#classPresetUnit_1aa3ae3f2724bf489f6341dc905537623f}

The [Area](#classArea) ID of the [Area](#classArea) the [PresetUnit](#classPresetUnit) is in.

# class `Profile` {#classProfile}

This class represents the details needed to get a player to a game or lobby.

This class hides the password. It provides the [login()](#classProfile_1a0c16e26d243cf44ccac630f61d14aec5) method to use the password.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ProfileType `[`type`](#classProfile_1a55544294c83a6be6c9cfe9910f05e48a) | The type of profile, see [ProfileType](#namespaceProfileType).
`public String `[`ip`](#classProfile_1a7e526a7e2ef6fd606ab649a1b88bde35) | The IP of the game to connect to (TCP/IP join).
`public String `[`username`](#classProfile_1a3960b8797bca1eb38131b3df66718e0c) | The username to use to connect to battle.net.
`public union Profile::@0 `[`gateway`](#classProfile_1a4329f122e8a7442ca2efbba71c060f69) | The battle.net gateway to connect to.
`public String `[`character`](#classProfile_1a51ec68f5f69972a1b1557f5499baf0e0) | The character to select.
`public int8_t `[`difficulty`](#classProfile_1aa5eea6e6a7396dd2ae9f89ad0801d544) | The difficulty to use: 0 - normal, 1 - nightmare, 2 - hell.
`public uint32_t `[`maxLoginTime`](#classProfile_1a8c0867890cacb3b91987b41a1fbaa3c1) | The number of milliseconds to wait while logging in.
`public uint32_t `[`maxCharacterSelectTime`](#classProfile_1ab3927b4008bcba2195125993048bf030) | The number of milliseconds to wait for the characters to load.
`public  `[`Profile`](#classProfile_1a4eea708cdbed0262d9e7ddbe3f1e3f89)`()` | Create a [Profile](#classProfile) for the currently set profile.
`public  `[`Profile`](#classProfile_1acdcb14b34cd75227369ff5ad2e62e766)`(String profileName)` | Create a [Profile](#classProfile) for the named profile.
`public  `[`Profile`](#classProfile_1a98db02707424bffe71d5bbec6c52cf09)`(ProfileType pt,String charName,int8_t diff)` | Create a [Profile](#classProfile) with the given information.
`public  `[`Profile`](#classProfile_1ab4663dc868fc955a8bc97fe96aae969c)`(ProfileType pt,String account,String pass,String charName,String gateway)` | Create a [Profile](#classProfile) with the given information.
`public  `[`Profile`](#classProfile_1a79565a75e65ed00a878e44e47a3ec1c4)`(ProfileType pt,String charName,String ip)` | Create a [Profile](#classProfile) with the given information.
`public void `[`login`](#classProfile_1a0c16e26d243cf44ccac630f61d14aec5)`()` | Log the profile in.

## Members

#### `public ProfileType `[`type`](#classProfile_1a55544294c83a6be6c9cfe9910f05e48a) {#classProfile_1a55544294c83a6be6c9cfe9910f05e48a}

The type of profile, see [ProfileType](#namespaceProfileType).

#### `public String `[`ip`](#classProfile_1a7e526a7e2ef6fd606ab649a1b88bde35) {#classProfile_1a7e526a7e2ef6fd606ab649a1b88bde35}

The IP of the game to connect to (TCP/IP join).

#### `public String `[`username`](#classProfile_1a3960b8797bca1eb38131b3df66718e0c) {#classProfile_1a3960b8797bca1eb38131b3df66718e0c}

The username to use to connect to battle.net.

#### `public union Profile::@0 `[`gateway`](#classProfile_1a4329f122e8a7442ca2efbba71c060f69) {#classProfile_1a4329f122e8a7442ca2efbba71c060f69}

The battle.net gateway to connect to.

#### `public String `[`character`](#classProfile_1a51ec68f5f69972a1b1557f5499baf0e0) {#classProfile_1a51ec68f5f69972a1b1557f5499baf0e0}

The character to select.

#### `public int8_t `[`difficulty`](#classProfile_1aa5eea6e6a7396dd2ae9f89ad0801d544) {#classProfile_1aa5eea6e6a7396dd2ae9f89ad0801d544}

The difficulty to use: 0 - normal, 1 - nightmare, 2 - hell.

#### `public uint32_t `[`maxLoginTime`](#classProfile_1a8c0867890cacb3b91987b41a1fbaa3c1) {#classProfile_1a8c0867890cacb3b91987b41a1fbaa3c1}

The number of milliseconds to wait while logging in.

#### `public uint32_t `[`maxCharacterSelectTime`](#classProfile_1ab3927b4008bcba2195125993048bf030) {#classProfile_1ab3927b4008bcba2195125993048bf030}

The number of milliseconds to wait for the characters to load.

#### `public  `[`Profile`](#classProfile_1a4eea708cdbed0262d9e7ddbe3f1e3f89)`()` {#classProfile_1a4eea708cdbed0262d9e7ddbe3f1e3f89}

Create a [Profile](#classProfile) for the currently set profile.

#### `public  `[`Profile`](#classProfile_1acdcb14b34cd75227369ff5ad2e62e766)`(String profileName)` {#classProfile_1acdcb14b34cd75227369ff5ad2e62e766}

Create a [Profile](#classProfile) for the named profile.

#### Parameters
* `profileName` Name of the profile to load.

#### `public  `[`Profile`](#classProfile_1a98db02707424bffe71d5bbec6c52cf09)`(ProfileType pt,String charName,int8_t diff)` {#classProfile_1a98db02707424bffe71d5bbec6c52cf09}

Create a [Profile](#classProfile) with the given information.

#### Parameters
* `pt` The type of profile, this constructor handles singlePlayer and tcpIpHost types.

* `charName` Name of the character.

* `diff` Difficulty, 0 - normal, 1 - nightmare, 2 - hell.

#### `public  `[`Profile`](#classProfile_1ab4663dc868fc955a8bc97fe96aae969c)`(ProfileType pt,String account,String pass,String charName,String gateway)` {#classProfile_1ab4663dc868fc955a8bc97fe96aae969c}

Create a [Profile](#classProfile) with the given information.

#### Parameters
* `pt` The type of profile, this constructor handles battleNet and openBattleNet types.

* `account` Account name.

* `pass` Password.

* `charName` Name of the character.

* `gateway` Search string for the gateway (any substring of the desired gateway, will take first gateway that matches).

#### `public  `[`Profile`](#classProfile_1a79565a75e65ed00a878e44e47a3ec1c4)`(ProfileType pt,String charName,String ip)` {#classProfile_1a79565a75e65ed00a878e44e47a3ec1c4}

Create a [Profile](#classProfile) with the given information.

#### Parameters
* `pt` The type of profile, this constructor handles singlePlayer and tcpIpHost types.

* `charName` Name of the character.

* `ip` IP address to connect to.

#### `public void `[`login`](#classProfile_1a0c16e26d243cf44ccac630f61d14aec5)`()` {#classProfile_1a0c16e26d243cf44ccac630f61d14aec5}

Log the profile in.

# class `Room` {#classRoom}

Represents a "Room" in the game.

A [Room](#classRoom) is a rectangular piece of the map data. It has pointers to many lists, such as a list of [PresetUnit](#classPresetUnit) s.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`number`](#classRoom_1ace0776823076279027a43e37096f44a2) | Get the [Room](#classRoom) number.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classRoom_1a7e5d5a363ed3c93efc6b1c321f0ec957) | Get the x coordinate of the [Room](#classRoom).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classRoom_1a8bfbccf2843aab2175743f8d9b5ffe48) | Get the y coordinate of the [Room](#classRoom).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`xsize`](#classRoom_1a7c90b0e176a112beb7e8dcc808576e8b) | Get the x size (width) of the [Room](#classRoom).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ysize`](#classRoom_1ae4dbb7c19fc3faa8e876c03aa8ed7fb9) | Get the y size (height) of the [Room](#classRoom).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`subnumber`](#classRoom_1adf03f03ffb94895c18f291a325e51fb2) | No implementation.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`area`](#classRoom_1a0e12c557e6658e021fc94dfe950ace67) | Get the [Area](#classArea) ID for the area which the [Room](#classRoom) is in.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`level`](#classRoom_1a5d8cf5f2d71723e3244654603a5ae84f) | Get the [Area](#classArea) ID for the area which the [Room](#classRoom) is in.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`correcttomb`](#classRoom_1af1e1126e1534f1653ce6b5fcd77026a4) | Get the correct tomb.
`public bool `[`getNext`](#classRoom_1a3dc890fc3d954ae8bd4c6da5721ed0ac)`()` | Move to the next [Room](#classRoom).
`public bool `[`reveal`](#classRoom_1a8b1a054e31adb584622cafc321e9e064)`()` | Reveal the [Room](#classRoom) on the map.
`public `[`PresetUnit`](#classPresetUnit)` `[`getPresetUnits`](#classRoom_1a0ddb9c16273a4e9d11365b9f927e74aa)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClass)` | Get the [PresetUnit](#classPresetUnit) s from the current [Room](#classRoom).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getCollision`](#classRoom_1af6cedb196d4c1f1ad52e4f9076593248)`()` | Get the collision data for the [Room](#classRoom).
`public `[`Room`](#classRoom)` `[`getNearby`](#classRoom_1a43d7c3ae8cf396e9883e79c5d5a4b902)`()` | Get the "nearby" Rooms from pRoom2Near member.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getStat`](#classRoom_1aa43b095fa97e00fd593d949b354ba920)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat)` | Get some property of the [Room](#classRoom).
`public `[`Room`](#classRoom)` `[`getFirst`](#classRoom_1ad9a6e43e97d1f9368eeecc578dcd6e26)`()` | Get the first [Room](#classRoom) of the level this [Room](#classRoom) is on.
`public bool `[`unitInRoom`](#classRoom_1aad7e5367decaea3e683b2c51a8e43bb8)`(`[`Unit`](#classUnit)` unit)` | Determine whether or not the [Unit](#classUnit) is in the [Room](#classRoom).

## Members

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`number`](#classRoom_1ace0776823076279027a43e37096f44a2) {#classRoom_1ace0776823076279027a43e37096f44a2}

Get the [Room](#classRoom) number.

> Todo: Determine what a "room number" is.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classRoom_1a7e5d5a363ed3c93efc6b1c321f0ec957) {#classRoom_1a7e5d5a363ed3c93efc6b1c321f0ec957}

Get the x coordinate of the [Room](#classRoom).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classRoom_1a8bfbccf2843aab2175743f8d9b5ffe48) {#classRoom_1a8bfbccf2843aab2175743f8d9b5ffe48}

Get the y coordinate of the [Room](#classRoom).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`xsize`](#classRoom_1a7c90b0e176a112beb7e8dcc808576e8b) {#classRoom_1a7c90b0e176a112beb7e8dcc808576e8b}

Get the x size (width) of the [Room](#classRoom).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ysize`](#classRoom_1ae4dbb7c19fc3faa8e876c03aa8ed7fb9) {#classRoom_1ae4dbb7c19fc3faa8e876c03aa8ed7fb9}

Get the y size (height) of the [Room](#classRoom).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`subnumber`](#classRoom_1adf03f03ffb94895c18f291a325e51fb2) {#classRoom_1adf03f03ffb94895c18f291a325e51fb2}

No implementation.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`area`](#classRoom_1a0e12c557e6658e021fc94dfe950ace67) {#classRoom_1a0e12c557e6658e021fc94dfe950ace67}

Get the [Area](#classArea) ID for the area which the [Room](#classRoom) is in.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`level`](#classRoom_1a5d8cf5f2d71723e3244654603a5ae84f) {#classRoom_1a5d8cf5f2d71723e3244654603a5ae84f}

Get the [Area](#classArea) ID for the area which the [Room](#classRoom) is in.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`correcttomb`](#classRoom_1af1e1126e1534f1653ce6b5fcd77026a4) {#classRoom_1af1e1126e1534f1653ce6b5fcd77026a4}

Get the correct tomb.

> Todo: Determine if this is the [Area](#classArea) ID of the correct tomb.

> Todo: Determine what [Room](#classRoom) s this is valid on.

#### `public bool `[`getNext`](#classRoom_1a3dc890fc3d954ae8bd4c6da5721ed0ac)`()` {#classRoom_1a3dc890fc3d954ae8bd4c6da5721ed0ac}

Move to the next [Room](#classRoom).

#### Returns
Whether there was another [Room](#classRoom) to move to or not.

#### `public bool `[`reveal`](#classRoom_1a8b1a054e31adb584622cafc321e9e064)`()` {#classRoom_1a8b1a054e31adb584622cafc321e9e064}

Reveal the [Room](#classRoom) on the map.

#### Returns
Whether or not the [Room](#classRoom) was successfully revealed.

#### `public `[`PresetUnit`](#classPresetUnit)` `[`getPresetUnits`](#classRoom_1a0ddb9c16273a4e9d11365b9f927e74aa)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nClass)` {#classRoom_1a0ddb9c16273a4e9d11365b9f927e74aa}

Get the [PresetUnit](#classPresetUnit) s from the current [Room](#classRoom).

#### Parameters
* `nType` The type of [Unit](#classUnit) to get. See [Unit::type](#classUnit_1a45243122ae655f50179f96bc831bfb1d).

* `nClass` The class id of the [Unit](#classUnit) (s) to find. See Unit::classId.

#### Returns
An array of all the [PresetUnit](#classPresetUnit) s from the current [Room](#classRoom).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getCollision`](#classRoom_1af6cedb196d4c1f1ad52e4f9076593248)`()` {#classRoom_1af6cedb196d4c1f1ad52e4f9076593248}

Get the collision data for the [Room](#classRoom).

> Todo: Verify that the array does actually have reverse of usual dimensions.

#### Returns
An array with the collision data. The first dimension is the y coordinate, the second is the x coordinate.

#### `public `[`Room`](#classRoom)` `[`getNearby`](#classRoom_1a43d7c3ae8cf396e9883e79c5d5a4b902)`()` {#classRoom_1a43d7c3ae8cf396e9883e79c5d5a4b902}

Get the "nearby" Rooms from pRoom2Near member.

#### Returns
An array of the nearby Rooms.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getStat`](#classRoom_1aa43b095fa97e00fd593d949b354ba920)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat)` {#classRoom_1aa43b095fa97e00fd593d949b354ba920}

Get some property of the [Room](#classRoom).

#### Parameters
* `nStat` Which property to get:

0 - xStart (room 1)

1 - yStart (room 1)

2 - xSize (room 1)

3 - ySize (room 1)

4 - posX (room 2)

5 - posY (room 2)

6 - sizeX (room 2)

7 - sizeY (room 2)

9 - posGameX (coll)

10 - posGameY (coll)

11 - sizeGameX (coll)

12 - sizeGameY (coll)

13 - posRoomX (coll)

14 - posGameY (coll)

15 - sizeRoomX (coll)

16 - sizeRoomY (coll)

#### Returns
The stat value.

#### `public `[`Room`](#classRoom)` `[`getFirst`](#classRoom_1ad9a6e43e97d1f9368eeecc578dcd6e26)`()` {#classRoom_1ad9a6e43e97d1f9368eeecc578dcd6e26}

Get the first [Room](#classRoom) of the level this [Room](#classRoom) is on.

#### Returns
The first [Room](#classRoom).

#### `public bool `[`unitInRoom`](#classRoom_1aad7e5367decaea3e683b2c51a8e43bb8)`(`[`Unit`](#classUnit)` unit)` {#classRoom_1aad7e5367decaea3e683b2c51a8e43bb8}

Determine whether or not the [Unit](#classUnit) is in the [Room](#classRoom).

#### Parameters
* `unit` The unit to check.

#### Returns
Whether or not the [Unit](#classUnit) is in the [Room](#classRoom).

# class `Sandbox` {#classSandbox}

A separate context to run scripts in.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`Sandbox`](#classSandbox_1a414860b7f66f97746dfda9564bdbf2eb)`()` | Create a [Sandbox](#classSandbox).
`public Object `[`evaluate`](#classSandbox_1ab2c4416ba21800e25b626beff623a5f5)`(String code)` | Evaluate the code passed in and return the result.
`public Object `[`include`](#classSandbox_1a76b0fc82176f61c0ae48d21af80060a0)`(String file)` | Include a file from ScriptPath\libs\file.
`public bool `[`isInclude`](#classSandbox_1ad924329aeb26651647f7423187541c53)`(String file)` | Determine whether a file has been included yet or not.
`public void `[`clearScope`](#classSandbox_1a103663ab48c1deef0714995e58deab83)`()` | Clear the scope of the [Sandbox](#classSandbox)'s global object.

## Members

#### `public  `[`Sandbox`](#classSandbox_1a414860b7f66f97746dfda9564bdbf2eb)`()` {#classSandbox_1a414860b7f66f97746dfda9564bdbf2eb}

Create a [Sandbox](#classSandbox).

This creates a separate context to run things in.

#### `public Object `[`evaluate`](#classSandbox_1ab2c4416ba21800e25b626beff623a5f5)`(String code)` {#classSandbox_1ab2c4416ba21800e25b626beff623a5f5}

Evaluate the code passed in and return the result.

#### Parameters
* `code` The code to run, literally JavaScript code to run.

#### Returns
The result of the last expression statement.

#### `public Object `[`include`](#classSandbox_1a76b0fc82176f61c0ae48d21af80060a0)`(String file)` {#classSandbox_1a76b0fc82176f61c0ae48d21af80060a0}

Include a file from ScriptPath\libs\file.

#### Parameters
* `file` The filename relative to ScriptPath\libs to include.

#### Returns
The result of the last expression statement.

#### `public bool `[`isInclude`](#classSandbox_1ad924329aeb26651647f7423187541c53)`(String file)` {#classSandbox_1ad924329aeb26651647f7423187541c53}

Determine whether a file has been included yet or not.

#### Parameters
* `file` The filename relative to ScriptPath\libs to include.

#### Returns
Whether or not the file has been included.

#### `public void `[`clearScope`](#classSandbox_1a103663ab48c1deef0714995e58deab83)`()` {#classSandbox_1a103663ab48c1deef0714995e58deab83}

Clear the scope of the [Sandbox](#classSandbox)'s global object.

> Todo: Clarify what this means (i.e. post-conditions).

# class `SQLite` {#classSQLite}

Class for dealing with an [SQLite](#classSQLite) database.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public String `[`path`](#classSQLite_1a5d99c8c883289592018dfd5ee94ea3ce) | Get the path used to open the database.
`public `[`DBStatement`](#classDBStatement)` `[`statements`](#classSQLite_1a30a088d06c85fa846e13dd87b1ac7ad7) | Get all the statements that have been queried.
`public bool `[`isOpen`](#classSQLite_1a82dd45ef884604bf40f70a16c9f6fbc6) | Whether or not the database is open.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`lastRowId`](#classSQLite_1aff1af94823aa7b2de96f65993686feed) | Get the row id of the last inserted row.
`public double `[`changes`](#classSQLite_1a8eaeea285b896935182fdd334b605c72) | Get the number of rows modified/inserted/deleted by the last statement.
`public  `[`SQLite`](#classSQLite_1a9520cbf360895c30909dfdac712a9aef)`(String path,bool autoOpen)` | Create a database object which can be used to open [SQLite](#classSQLite) databases and execute queries.
`public bool `[`execute`](#classSQLite_1a8d0c60072870fba816b974671996c2af)`(String queryString)` | Execute a query on the database.
`public `[`DBStatement`](#classDBStatement)` `[`query`](#classSQLite_1a8ebb32f52a5426ae36a7977c540feb32)`(String sql,...)` | Do a sqlite3_prepare_v2 on the database with sql, then call the appropriate sqlite3_bind_ functions on the remaining parameters.
`public bool `[`open`](#classSQLite_1af4ea33f6a23d60579ee6e36d0f0276fc)`()` | Open the database.
`public bool `[`close`](#classSQLite_1ae4c723f03c88a9a11b6b7cdb7fba0e18)`()` | Close the database.

## Members

#### `public String `[`path`](#classSQLite_1a5d99c8c883289592018dfd5ee94ea3ce) {#classSQLite_1a5d99c8c883289592018dfd5ee94ea3ce}

Get the path used to open the database.

#### `public `[`DBStatement`](#classDBStatement)` `[`statements`](#classSQLite_1a30a088d06c85fa846e13dd87b1ac7ad7) {#classSQLite_1a30a088d06c85fa846e13dd87b1ac7ad7}

Get all the statements that have been queried.

#### `public bool `[`isOpen`](#classSQLite_1a82dd45ef884604bf40f70a16c9f6fbc6) {#classSQLite_1a82dd45ef884604bf40f70a16c9f6fbc6}

Whether or not the database is open.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`lastRowId`](#classSQLite_1aff1af94823aa7b2de96f65993686feed) {#classSQLite_1aff1af94823aa7b2de96f65993686feed}

Get the row id of the last inserted row.

#### `public double `[`changes`](#classSQLite_1a8eaeea285b896935182fdd334b605c72) {#classSQLite_1a8eaeea285b896935182fdd334b605c72}

Get the number of rows modified/inserted/deleted by the last statement.

#### `public  `[`SQLite`](#classSQLite_1a9520cbf360895c30909dfdac712a9aef)`(String path,bool autoOpen)` {#classSQLite_1a9520cbf360895c30909dfdac712a9aef}

Create a database object which can be used to open [SQLite](#classSQLite) databases and execute queries.

#### Parameters
* `path` The path to the database to open.

* `autoOpen` Whether to open the database immediately or not.

#### `public bool `[`execute`](#classSQLite_1a8d0c60072870fba816b974671996c2af)`(String queryString)` {#classSQLite_1a8d0c60072870fba816b974671996c2af}

Execute a query on the database.

#### Parameters
* `queryString` The query string to execute.

#### Returns
true

#### `public `[`DBStatement`](#classDBStatement)` `[`query`](#classSQLite_1a8ebb32f52a5426ae36a7977c540feb32)`(String sql,...)` {#classSQLite_1a8ebb32f52a5426ae36a7977c540feb32}

Do a sqlite3_prepare_v2 on the database with sql, then call the appropriate sqlite3_bind_ functions on the remaining parameters.

#### Parameters
* `sql` The query to pass to sqlite3_prepare v2.

> Todo: Determine what this function does (better documenation).

#### Returns
The resulting [DBStatement](#classDBStatement).

#### `public bool `[`open`](#classSQLite_1af4ea33f6a23d60579ee6e36d0f0276fc)`()` {#classSQLite_1af4ea33f6a23d60579ee6e36d0f0276fc}

Open the database.

#### Returns
true

#### `public bool `[`close`](#classSQLite_1ae4c723f03c88a9a11b6b7cdb7fba0e18)`()` {#classSQLite_1ae4c723f03c88a9a11b6b7cdb7fba0e18}

Close the database.

#### Returns
true

# class `Text` {#classText}

A [Text](#classText) screen hook.

> Todo: Verify all the documentation in this class.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classText_1a0561058ba47e899900800635dbe270c2) | The x coordinate (left) of the [Text](#classText).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classText_1a90f1e6cb7aa15a593d36c96144087179) | The y coordinate (top) of the [Text](#classText).
`public bool `[`visible`](#classText_1a9d8567b4c506868eeabe14720a627096) | Whether or not the [Text](#classText) is visible.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`align`](#classText_1a4c8c8cccbf4fe4c50f9e56ff3f5e5c96) | The horizontal alignment.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`zorder`](#classText_1ab953550b21d489b9c3a686e8119f19fe) | The z-order of the [Text](#classText) (what it covers up and is covered by).
`public ClickHandler `[`click`](#classText_1a6d8b641a52b4e8dcd78b3477fe0456c4) | The click handler that gets called when the [Text](#classText) is clicked.
`public HoverHandler `[`hover`](#classText_1ac180c2f5c657fb60f5ec3b81bd1b8cd3) | The hover handler that gets called when the [Text](#classText) gets hovered over.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`color`](#classText_1a6f4e60b7e0ccd69f154dad14a48be330) | The color of the [Text](#classText).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`font`](#classText_1a4113e8ec35bb03fa7529d357c5f389b1) | Something that determines the font.
`public String `[`text`](#classText_1a562d404f9579c7f6e04ada90126d4125) | The string that the [Text](#classText) hook displays.
`public  `[`Text`](#classText_1ac6a792e28f41717fc5a4c803ec90d41b)`(String szText,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` color,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` font,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` align,bool automap,ClickHandler click,HoverHandler hover)` | Create a [Text](#classText) hook with the given parameters.
`public void `[`remove`](#classText_1a6d32e163a5fb4eb1a2b90e85baf83600)`()` | Remove the [Text](#classText) hook from the screen and destroy the corresponding object.

## Members

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classText_1a0561058ba47e899900800635dbe270c2) {#classText_1a0561058ba47e899900800635dbe270c2}

The x coordinate (left) of the [Text](#classText).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classText_1a90f1e6cb7aa15a593d36c96144087179) {#classText_1a90f1e6cb7aa15a593d36c96144087179}

The y coordinate (top) of the [Text](#classText).

#### `public bool `[`visible`](#classText_1a9d8567b4c506868eeabe14720a627096) {#classText_1a9d8567b4c506868eeabe14720a627096}

Whether or not the [Text](#classText) is visible.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`align`](#classText_1a4c8c8cccbf4fe4c50f9e56ff3f5e5c96) {#classText_1a4c8c8cccbf4fe4c50f9e56ff3f5e5c96}

The horizontal alignment.

0 - Left

1 - Right

2 - Center

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`zorder`](#classText_1ab953550b21d489b9c3a686e8119f19fe) {#classText_1ab953550b21d489b9c3a686e8119f19fe}

The z-order of the [Text](#classText) (what it covers up and is covered by).

#### `public ClickHandler `[`click`](#classText_1a6d8b641a52b4e8dcd78b3477fe0456c4) {#classText_1a6d8b641a52b4e8dcd78b3477fe0456c4}

The click handler that gets called when the [Text](#classText) is clicked.

#### `public HoverHandler `[`hover`](#classText_1ac180c2f5c657fb60f5ec3b81bd1b8cd3) {#classText_1ac180c2f5c657fb60f5ec3b81bd1b8cd3}

The hover handler that gets called when the [Text](#classText) gets hovered over.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`color`](#classText_1a6f4e60b7e0ccd69f154dad14a48be330) {#classText_1a6f4e60b7e0ccd69f154dad14a48be330}

The color of the [Text](#classText).

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=1000](http://forums.d2botnet.org/viewtopic.php?f=18&t=1000)

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`font`](#classText_1a4113e8ec35bb03fa7529d357c5f389b1) {#classText_1a4113e8ec35bb03fa7529d357c5f389b1}

Something that determines the font.

#### `public String `[`text`](#classText_1a562d404f9579c7f6e04ada90126d4125) {#classText_1a562d404f9579c7f6e04ada90126d4125}

The string that the [Text](#classText) hook displays.

#### `public  `[`Text`](#classText_1ac6a792e28f41717fc5a4c803ec90d41b)`(String szText,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` color,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` font,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` align,bool automap,ClickHandler click,HoverHandler hover)` {#classText_1ac6a792e28f41717fc5a4c803ec90d41b}

Create a [Text](#classText) hook with the given parameters.

#### Parameters
* `szText` The string that the [Text](#classText) hook displays.

* `x` The x coordinate (left) of the [Text](#classText).

* `y` The y coordinate (top) of the [Text](#classText).

* `color` The color of the [Text](#classText).

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=1000](http://forums.d2botnet.org/viewtopic.php?f=18&t=1000)

#### Parameters
* `font` Something that determines the font.

* `align` The horizontal alignment.

0 - Left

1 - Right

2 - Center

#### Parameters
* `automap` Whether the [Text](#classText) is in automap coordinate space (true) or screen coordinate space (false).

* `click` The click handler that gets called when the [Text](#classText) is clicked.

* `hover` The hover handler that gets called when the [Text](#classText) gets hovered over.

#### `public void `[`remove`](#classText_1a6d32e163a5fb4eb1a2b90e85baf83600)`()` {#classText_1a6d32e163a5fb4eb1a2b90e85baf83600}

Remove the [Text](#classText) hook from the screen and destroy the corresponding object.

# class `Unit` {#classUnit}

This class represents a unit (monster, wp, npc, character, etc) in the game.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`type`](#classUnit_1a45243122ae655f50179f96bc831bfb1d) | The type of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`classid`](#classUnit_1ab7a6985a8d8a60137e8a469fbb5b2d04) | The class id of the object.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mode`](#classUnit_1a0e0de49749be72180866dd31b76a0102) | The mode of the unit.
`public String `[`name`](#classUnit_1aa869e12411361f016ed04a238b3894ef) | The name of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`act`](#classUnit_1afaf30997a33a9c05c7a4941d1c7bfd39) | The act where the unit is currently located.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`gid`](#classUnit_1ad6fb57eda20f91a8b4ea15eb28621f1f) | The unit unique id.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classUnit_1a356b2d8a1d6dde32b67b2c9a3e173b99) | The x location of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classUnit_1a6846a7ed25c3e93b51f9bc9643576f05) | The y location of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`targetx`](#classUnit_1abe6abf7822c2b691853fb58320157b0f) | The target x location of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`targety`](#classUnit_1a9ee1df35e54c3a4f8756329782792400) | The target y location of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`area`](#classUnit_1af5f2e11d4f116084ffd807b578078d7d) | The id of the area (level) the unit is located in.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`hp`](#classUnit_1ae9d3c95ccf18f5bc2bd6a7e68f0e7b1c) | The unit's current health.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`hpmax`](#classUnit_1a0d97cfa23ab03fa550861e9f0aac7f20) | The unit's maximum health.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mp`](#classUnit_1abbab13fe2ae1ae93b78ea148fde7a4ff) | The unit's current mana.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mpmax`](#classUnit_1a07b6e27b8e9e9430ff9c3be224f6090e) | The unit's maximum mana.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`stamina`](#classUnit_1a53c596913a3c96cc692df12c26a3ac7d) | The unit's current stamina.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`staminamax`](#classUnit_1ac6acb5617d4f9b525287e35b91575c31) | The unit's maximum stamina.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`charlvl`](#classUnit_1ae12b4d41735cb54cf7609bcaa772f4ae) | The character level.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`itemcount`](#classUnit_1af3532e4e568df722332b0e2d85759fb3) | The number of items in inventory.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`owner`](#classUnit_1a8616a100c244d69e7592d5b6843a0b61) | The unit id of the owner of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ownertype`](#classUnit_1ae2003fc0bc7e60523ff0c05d1f7bb1ca) | The type of owner.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`spectype`](#classUnit_1a90be3cd88e866777cffb925e3244e730) | The special type of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`direction`](#classUnit_1af64fb0f78ce8cb663fe12ec8a1c5f81d) | The direction of the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`uniqueid`](#classUnit_1aeda7422b700e357cdda91fb24312e58e) | The unique id of a boss.
`public String `[`code`](#classUnit_1a1dfbd39341316980c6c17305555e141c) | The three digit code for an item.
`public String `[`prefix`](#classUnit_1a6b00de01b009bf7b212d4c52326fa7fc) | The magic prefix of the item.
`public String `[`suffix`](#classUnit_1a871f08609370b8e5a3c91aa1cd5dae1a) | The magic suffix of the item.
`public String[] `[`prefixes`](#classUnit_1a021da0af0241b96f52cbf411c11b3d34) | The magic prefixes of the item.
`public String[] `[`suffixes`](#classUnit_1a3c72883e56ef785dfebbf1b0a86fecff) | The magic suffixes of the item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`prefixnum`](#classUnit_1a00e6bd1941d366802e6ac571e36da8c3) | The id code for the magic prefix.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`suffixnum`](#classUnit_1ae71acd4a5d4d075f0211242f48e18d3c) | The id code for the magic suffix.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`prefixnums`](#classUnit_1a66f3e79ca4097a2c095a4f047b97f996) | The id codes for the magic prefixes.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`suffixnums`](#classUnit_1af668286ae6c3d1d87bfc531ab8d54f77) | The id codes for the magic suffixes.
`public String `[`fname`](#classUnit_1a23495fdca380dc2f19c624b5bcf3f4c8) | The full name of an item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`quality`](#classUnit_1af7a138ffb9643f0015ba22f0230e5ce4) | The item quality.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`node`](#classUnit_1ab5da58f77c0aaa3f3ce81cccee12e057) | No clue.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`location`](#classUnit_1a60b8bec5206902278dfbbebe75c3617e) | The location of the item (ground, inventory, stash, etc.).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sizex`](#classUnit_1a1320b38ed997f4922abfeb2966fed81b) | The x size of the item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sizey`](#classUnit_1afe39c0f050662a28ffd252d50f94910d) | The y size of the item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`itemType`](#classUnit_1ab0d3eddb92c27f52f7698895bcf3905b) | The type of the item.
`public String `[`description`](#classUnit_1a7c76ba13eb7e3a3f26f50282fb8b431e) | The description of the item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`bodylocation`](#classUnit_1ab7779c44d220bab7d0d8467a6d1fd007) | The equipped location of the item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ilvl`](#classUnit_1aee7cd2c778a2ad23cbb2001378bfd86b) | Item level.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`lvlreq`](#classUnit_1af1677614eb990c59aa3cd43be30983e2) | Level requirement (character level required to use the item).
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`gfx`](#classUnit_1a9bd325f9e2eb378709bf785a2b4bc6ad) | Get the id for the graphic used for the item.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`runwalk`](#classUnit_1ac8a909f484cee949343474ff0cddcb5f) | Whether the controlled character is in the always run mode or not.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`weaponswitch`](#classUnit_1ac9b8c63afb5360437af31a0b0902232a) | Set the weapon switch.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`objtype`](#classUnit_1adfb606b289eeccde32b0ed79ed0020c9) | The object type.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`islocked`](#classUnit_1afa81eef36e4eddf98f8dd69c48e22875) | Whether or not the chest is locked.
`public bool `[`getNext`](#classUnit_1aa6a3842cbc14d3456f1f447153d68b53)`()` | Get the next unit that matches the originally given name or class id and originally specified mode.
`public bool `[`getNext`](#classUnit_1a3745b5481a9ede47f517caa64e5eb6d2)`(String szName)` | Get the next unit that matches the given name and originally specified mode.
`public bool `[`getNext`](#classUnit_1a16a65b85a7c7a75742cb4494bc4fbc92)`(uint32_t dwClassId)` | Get the next unit that matches the given class id and originally specified mode.
`public bool `[`getNext`](#classUnit_1ab92726734ec51ea37d30808b166dbead)`(String szName,uint32_t dwMode)` | Get the next unit that matches the given name and mode.
`public bool `[`getNext`](#classUnit_1a6c91814477954824ee590aabc2bc8287)`(uint32_t dwClassId,uint32_t dwMode)` | Get the next unit that matches the given class id and mode.
`public void `[`cancel`](#classUnit_1abdc2ecc5fb8044db1800438e876a5253)`()` | Cancel whatever's going on.
`public bool `[`repair`](#classUnit_1a6565698fe901074f3c7e61799e001430)`()` | Try to repair.
`public bool `[`useMenu`](#classUnit_1a504281991916f1881b30f9968c62526c)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` menuItem)` | Use an NPC menu.
`public bool `[`interact`](#classUnit_1a0c70c60dd71e4b039245f023a752c06e)`()` | Interact with the unit.
`public bool `[`interact`](#classUnit_1aa1a4ac5b77fc8561252cad2af1ba9ba3)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` destId)` | Interact with a waypoint.
`public `[`Unit`](#classUnit)` `[`getItem`](#classUnit_1addc8856287aeb65821942e4e209d8a2a)`(String name,uint32_t mode,uint32_t nUnitId)` | Get an item from inventory by name, mode and nUnitId.
`public `[`Unit`](#classUnit)` `[`getItem`](#classUnit_1a4d0ddc5667c3b6dd4a15584b9f3b6eaa)`(uint32_t classId,uint32_t mode,uint32_t nUnitId)` | Get an item from inventory by classId, mode and nUnitId.
`public `[`Unit`](#classUnit)` `[`getItems`](#classUnit_1af421c40cb966dd2bef028c3ae2660e78)`()` | Get all items from inventory.
`public bool `[`getMerc`](#classUnit_1a33171db06dfdf2cc7d7826e1ea7242e4)`(bool dummy)` | Get whether this player has a merc.
`public `[`Unit`](#classUnit)` `[`getMerc`](#classUnit_1a765ff16754426875b9975e71c776a6ac)`()` | Get a player's merc.
`public String `[`getSkill`](#classUnit_1a85219a0b1d3856c432b6db80249ecc63)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` hand)` | Get skill name from hand.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classUnit_1a94823fedd1fb16eece0fe7fd729bb4e8)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` hand)` | Get skill id from hand.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classUnit_1acfc83d3e88c549e6dae3c682c3baf40f)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dummy)` | Get all skills.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classUnit_1ab14f99798787ec5b258a47824f089604)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSkillId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nExt)` | Calls D2COMMON_GetSkillLevel and returns the result.
`public `[`Unit`](#classUnit)` `[`getParent`](#classUnit_1aba1d739e034f714e07e5c66a1bcd8297)`()` | Gets the parent of a unit.
`public String `[`getParent`](#classUnit_1a59389e13f5a91193cc7c57a51372a529)`()` | Gets the parent of a unit.
`public void `[`overhead`](#classUnit_1a3b8b22982ac3eb1dcefb354102a19a30)`(Object message)` | Puts the string equivalent of message over the unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getFlags`](#classUnit_1a01704c64338a7818f03ea9fdb0205ee6)`()` | Returns the item flags.
`public bool `[`getFlag`](#classUnit_1a66aba538357c70138e3126b022749f56)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` flags)` | Same as getFlags, but returns a boolean.
`public double `[`getStat`](#classUnit_1a273cc4dadf71bdf8c2ad9b6ee5ed122a)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` | Get a stat by stat id and sub index.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getStat`](#classUnit_1ab7cb6e0da97e16296f391f448630c4e0)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` | Get a stat by stat id and sub index.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getStat`](#classUnit_1a106c9cbe30bae8d80322f3ec1bc3aafa)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` | Get an array of all the stats of the item.
`public bool `[`getState`](#classUnit_1a8ec41cccbb61db284264cc5879686a6d)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nState)` | Return whether or not the unit has a given state.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classUnit_1ac12f87a160fd951c157ab1107029a2d9)`(`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell)` | Get the price of the item at a given npc, with choice of buying or selling, in the current difficulty.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classUnit_1acb192f1005a38a4c7090c0a7f64d2c50)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` npcId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell)` | Get the price of the item at a given npc (by id), which choice of buying or selling, in the current difficulty.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classUnit_1aa8ba674e6441c93355844d49619998e8)`(`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` difficulty)` | Get the price of the item at a given npc, with choice of buying or selling, in a given difficulty.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classUnit_1a4b9c81d08835307ba5900dc99c8b9313)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` npcId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` difficulty)` | Get the price of the item at a given npc (by id), with choice of buying or selling, in a given difficulty.
`public bool `[`getEnchant`](#classUnit_1a082ad92039c9a817574adb3431ddb159)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nEnchant)` | Determine whether or not a unit has a given enchant.
`public bool `[`shop`](#classUnit_1aa4e63e5e27420a6965bda5d855bb8c49)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwMode)` | Shop with a given npc, either buying or selling.
`public bool `[`setSkill`](#classUnit_1a89e811c8b062728894b6504a8f02372d)`(String skillName,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand)` | Set the skill on the given hand to be skill with name skillName.
`public bool `[`setSkill`](#classUnit_1a3f88599825b6b93e1bf52f9c13df0a95)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSkillId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand)` | Set the skill on the given hand to be skill with id nSkillId.
`public void `[`move`](#classUnit_1a0b13c1bcd85e4a2fda08548feef07d0b)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y)` | Move to the given location.
`public void `[`move`](#classUnit_1a4a295cc929f3a8ccf67287d4f6f5515b)`()` | Move to this unit.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getQuest`](#classUnit_1afbb11a6c2f4457b19fd464c1df647065)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nAct,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nQuest)` | Get the quest flag for a quest specified by act and quest number.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getMinionCount`](#classUnit_1a1cf6810c2589b47f74cfa125375d75ed)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType)` | Get the number of minions of a certain type.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getRepairCost`](#classUnit_1ae007a9f727a4f34f40e5bb4d0867897b)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId)` | Get price to repair this unit at the current npc given by nNpcClassId.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classUnit_1a18eb04eaed8f97b76aacbd8b2734f563)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId)` | Get the cost to do something (buy, sell, repair) with the given item, at the given npc.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classUnit_1ac27394b9daab7a7c1c457ab6121910f8)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nDifficulty)` | Get the cost to do something (buy, sell, repair) with the given item, at the given npc, in the given difficulty.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classUnit_1a9db71041710e126f77d3a2eb2526fd9a)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nDifficulty)` | Get the cost to do something (buy, sell, repair) with the given item, at the given npc, in the given difficulty.
`public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classUnit_1ae375f1e4e46cdc39c29a947d7add4765)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`Unit`](#classUnit)` npc)` | Get the cost to do something (buy, sell, repair) with the given item, at the given npc.

## Members

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`type`](#classUnit_1a45243122ae655f50179f96bc831bfb1d) {#classUnit_1a45243122ae655f50179f96bc831bfb1d}

The type of the unit.

0 - Player

1 - NPC

2 - Object

3 - Missile

4 - Item

5 - Warp

Source: botNET

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`classid`](#classUnit_1ab7a6985a8d8a60137e8a469fbb5b2d04) {#classUnit_1ab7a6985a8d8a60137e8a469fbb5b2d04}

The class id of the object.

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=1002](http://forums.d2botnet.org/viewtopic.php?f=18&t=1002)

[http://forums.d2botnet.org/viewtopic.php?f=18&t=986](http://forums.d2botnet.org/viewtopic.php?f=18&t=986) and

[http://forums.d2botnet.org/viewtopic.php?f=18&t=985](http://forums.d2botnet.org/viewtopic.php?f=18&t=985)

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mode`](#classUnit_1a0e0de49749be72180866dd31b76a0102) {#classUnit_1a0e0de49749be72180866dd31b76a0102}

The mode of the unit.

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=988](http://forums.d2botnet.org/viewtopic.php?f=18&t=988)

#### `public String `[`name`](#classUnit_1aa869e12411361f016ed04a238b3894ef) {#classUnit_1aa869e12411361f016ed04a238b3894ef}

The name of the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`act`](#classUnit_1afaf30997a33a9c05c7a4941d1c7bfd39) {#classUnit_1afaf30997a33a9c05c7a4941d1c7bfd39}

The act where the unit is currently located.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`gid`](#classUnit_1ad6fb57eda20f91a8b4ea15eb28621f1f) {#classUnit_1ad6fb57eda20f91a8b4ea15eb28621f1f}

The unit unique id.

Referred to simply as the unit id. Used along with the unit type to uniquely identify the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`x`](#classUnit_1a356b2d8a1d6dde32b67b2c9a3e173b99) {#classUnit_1a356b2d8a1d6dde32b67b2c9a3e173b99}

The x location of the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`y`](#classUnit_1a6846a7ed25c3e93b51f9bc9643576f05) {#classUnit_1a6846a7ed25c3e93b51f9bc9643576f05}

The y location of the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`targetx`](#classUnit_1abe6abf7822c2b691853fb58320157b0f) {#classUnit_1abe6abf7822c2b691853fb58320157b0f}

The target x location of the unit.

Where the game is taking the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`targety`](#classUnit_1a9ee1df35e54c3a4f8756329782792400) {#classUnit_1a9ee1df35e54c3a4f8756329782792400}

The target y location of the unit.

Where the game is taking the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`area`](#classUnit_1af5f2e11d4f116084ffd807b578078d7d) {#classUnit_1af5f2e11d4f116084ffd807b578078d7d}

The id of the area (level) the unit is located in.

> Todo: Get a reference for the area IDs.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`hp`](#classUnit_1ae9d3c95ccf18f5bc2bd6a7e68f0e7b1c) {#classUnit_1ae9d3c95ccf18f5bc2bd6a7e68f0e7b1c}

The unit's current health.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`hpmax`](#classUnit_1a0d97cfa23ab03fa550861e9f0aac7f20) {#classUnit_1a0d97cfa23ab03fa550861e9f0aac7f20}

The unit's maximum health.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mp`](#classUnit_1abbab13fe2ae1ae93b78ea148fde7a4ff) {#classUnit_1abbab13fe2ae1ae93b78ea148fde7a4ff}

The unit's current mana.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`mpmax`](#classUnit_1a07b6e27b8e9e9430ff9c3be224f6090e) {#classUnit_1a07b6e27b8e9e9430ff9c3be224f6090e}

The unit's maximum mana.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`stamina`](#classUnit_1a53c596913a3c96cc692df12c26a3ac7d) {#classUnit_1a53c596913a3c96cc692df12c26a3ac7d}

The unit's current stamina.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`staminamax`](#classUnit_1ac6acb5617d4f9b525287e35b91575c31) {#classUnit_1ac6acb5617d4f9b525287e35b91575c31}

The unit's maximum stamina.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`charlvl`](#classUnit_1ae12b4d41735cb54cf7609bcaa772f4ae) {#classUnit_1ae12b4d41735cb54cf7609bcaa772f4ae}

The character level.

The level that determines stat points, skill levels, etc.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`itemcount`](#classUnit_1af3532e4e568df722332b0e2d85759fb3) {#classUnit_1af3532e4e568df722332b0e2d85759fb3}

The number of items in inventory.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`owner`](#classUnit_1a8616a100c244d69e7592d5b6843a0b61) {#classUnit_1a8616a100c244d69e7592d5b6843a0b61}

The unit id of the owner of the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ownertype`](#classUnit_1ae2003fc0bc7e60523ff0c05d1f7bb1ca) {#classUnit_1ae2003fc0bc7e60523ff0c05d1f7bb1ca}

The type of owner.

[type](#classUnit_1a45243122ae655f50179f96bc831bfb1d)

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`spectype`](#classUnit_1a90be3cd88e866777cffb925e3244e730) {#classUnit_1a90be3cd88e866777cffb925e3244e730}

The special type of the unit.

Represents things like unique, minion, boss, etc.

1 - "Normal" Boss 2 - Champion 4 - Boss 8 - Minion

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`direction`](#classUnit_1af64fb0f78ce8cb663fe12ec8a1c5f81d) {#classUnit_1af64fb0f78ce8cb663fe12ec8a1c5f81d}

The direction of the unit.

> Todo: Figure out what the direction is.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`uniqueid`](#classUnit_1aeda7422b700e357cdda91fb24312e58e) {#classUnit_1aeda7422b700e357cdda91fb24312e58e}

The unique id of a boss.

Taken from pUnit->pMonsterData->wUniqueNo. Not the same thing as the gid (unit id).

#### `public String `[`code`](#classUnit_1a1dfbd39341316980c6c17305555e141c) {#classUnit_1a1dfbd39341316980c6c17305555e141c}

The three digit code for an item.

See: [http://forums.d2botnet.org/viewtopic.php?f=18&t=991](http://forums.d2botnet.org/viewtopic.php?f=18&t=991)

#### `public String `[`prefix`](#classUnit_1a6b00de01b009bf7b212d4c52326fa7fc) {#classUnit_1a6b00de01b009bf7b212d4c52326fa7fc}

The magic prefix of the item.

#### `public String `[`suffix`](#classUnit_1a871f08609370b8e5a3c91aa1cd5dae1a) {#classUnit_1a871f08609370b8e5a3c91aa1cd5dae1a}

The magic suffix of the item.

#### `public String[] `[`prefixes`](#classUnit_1a021da0af0241b96f52cbf411c11b3d34) {#classUnit_1a021da0af0241b96f52cbf411c11b3d34}

The magic prefixes of the item.

#### `public String[] `[`suffixes`](#classUnit_1a3c72883e56ef785dfebbf1b0a86fecff) {#classUnit_1a3c72883e56ef785dfebbf1b0a86fecff}

The magic suffixes of the item.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`prefixnum`](#classUnit_1a00e6bd1941d366802e6ac571e36da8c3) {#classUnit_1a00e6bd1941d366802e6ac571e36da8c3}

The id code for the magic prefix.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`suffixnum`](#classUnit_1ae71acd4a5d4d075f0211242f48e18d3c) {#classUnit_1ae71acd4a5d4d075f0211242f48e18d3c}

The id code for the magic suffix.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`prefixnums`](#classUnit_1a66f3e79ca4097a2c095a4f047b97f996) {#classUnit_1a66f3e79ca4097a2c095a4f047b97f996}

The id codes for the magic prefixes.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`suffixnums`](#classUnit_1af668286ae6c3d1d87bfc531ab8d54f77) {#classUnit_1af668286ae6c3d1d87bfc531ab8d54f77}

The id codes for the magic suffixes.

#### `public String `[`fname`](#classUnit_1a23495fdca380dc2f19c624b5bcf3f4c8) {#classUnit_1a23495fdca380dc2f19c624b5bcf3f4c8}

The full name of an item.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`quality`](#classUnit_1af7a138ffb9643f0015ba22f0230e5ce4) {#classUnit_1af7a138ffb9643f0015ba22f0230e5ce4}

The item quality.

1 - Low quality

2 - Normal

3 - Superior

4 - Magic

5 - Set

6 - Rare

7 - Unique

8 - Crafted

Source: botNET

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`node`](#classUnit_1ab5da58f77c0aaa3f3ce81cccee12e057) {#classUnit_1ab5da58f77c0aaa3f3ce81cccee12e057}

No clue.

> Todo: Get a clue.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`location`](#classUnit_1a60b8bec5206902278dfbbebe75c3617e) {#classUnit_1a60b8bec5206902278dfbbebe75c3617e}

The location of the item (ground, inventory, stash, etc.).

0 - Ground

1 - Equipped

2 - Belt

3 - Inventory

4 - Store

5 - Trade

6 - Cube

7 - Stash

Source: d2botnet code

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sizex`](#classUnit_1a1320b38ed997f4922abfeb2966fed81b) {#classUnit_1a1320b38ed997f4922abfeb2966fed81b}

The x size of the item.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`sizey`](#classUnit_1afe39c0f050662a28ffd252d50f94910d) {#classUnit_1afe39c0f050662a28ffd252d50f94910d}

The y size of the item.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`itemType`](#classUnit_1ab0d3eddb92c27f52f7698895bcf3905b) {#classUnit_1ab0d3eddb92c27f52f7698895bcf3905b}

The type of the item.

> Todo: Put together a reference for item type.

#### `public String `[`description`](#classUnit_1a7c76ba13eb7e3a3f26f50282fb8b431e) {#classUnit_1a7c76ba13eb7e3a3f26f50282fb8b431e}

The description of the item.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`bodylocation`](#classUnit_1ab7779c44d220bab7d0d8467a6d1fd007) {#classUnit_1ab7779c44d220bab7d0d8467a6d1fd007}

The equipped location of the item.

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

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`ilvl`](#classUnit_1aee7cd2c778a2ad23cbb2001378bfd86b) {#classUnit_1aee7cd2c778a2ad23cbb2001378bfd86b}

Item level.

Used for things like item stat rolling.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`lvlreq`](#classUnit_1af1677614eb990c59aa3cd43be30983e2) {#classUnit_1af1677614eb990c59aa3cd43be30983e2}

Level requirement (character level required to use the item).

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`gfx`](#classUnit_1a9bd325f9e2eb378709bf785a2b4bc6ad) {#classUnit_1a9bd325f9e2eb378709bf785a2b4bc6ad}

Get the id for the graphic used for the item.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`runwalk`](#classUnit_1ac8a909f484cee949343474ff0cddcb5f) {#classUnit_1ac8a909f484cee949343474ff0cddcb5f}

Whether the controlled character is in the always run mode or not.

0 - Walk unless directed to run 1 - Always run

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`weaponswitch`](#classUnit_1ac9b8c63afb5360437af31a0b0902232a) {#classUnit_1ac9b8c63afb5360437af31a0b0902232a}

Set the weapon switch.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`objtype`](#classUnit_1adfb606b289eeccde32b0ed79ed0020c9) {#classUnit_1adfb606b289eeccde32b0ed79ed0020c9}

The object type.

> Todo: Figure out what this means.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`islocked`](#classUnit_1afa81eef36e4eddf98f8dd69c48e22875) {#classUnit_1afa81eef36e4eddf98f8dd69c48e22875}

Whether or not the chest is locked.

#### `public bool `[`getNext`](#classUnit_1aa6a3842cbc14d3456f1f447153d68b53)`()` {#classUnit_1aa6a3842cbc14d3456f1f447153d68b53}

Get the next unit that matches the originally given name or class id and originally specified mode.

#### Returns
Whether another unit was found.

#### `public bool `[`getNext`](#classUnit_1a3745b5481a9ede47f517caa64e5eb6d2)`(String szName)` {#classUnit_1a3745b5481a9ede47f517caa64e5eb6d2}

Get the next unit that matches the given name and originally specified mode.

#### Parameters
* `szName` The name to look for.

#### Returns
Whether another unit was found.

#### `public bool `[`getNext`](#classUnit_1a16a65b85a7c7a75742cb4494bc4fbc92)`(uint32_t dwClassId)` {#classUnit_1a16a65b85a7c7a75742cb4494bc4fbc92}

Get the next unit that matches the given class id and originally specified mode.

#### Parameters
* `dwClassId` The class id to look for.

#### Returns
Whether another unit was found.

#### `public bool `[`getNext`](#classUnit_1ab92726734ec51ea37d30808b166dbead)`(String szName,uint32_t dwMode)` {#classUnit_1ab92726734ec51ea37d30808b166dbead}

Get the next unit that matches the given name and mode.

#### Parameters
* `szName` The name to look for.

* `dwMode` Either the mode being searched for, or a bitmask with bit 29 set and bits 0-28 corresponding to modes of units being searched for.

#### Returns
Whether another unit was found.

#### `public bool `[`getNext`](#classUnit_1a6c91814477954824ee590aabc2bc8287)`(uint32_t dwClassId,uint32_t dwMode)` {#classUnit_1a6c91814477954824ee590aabc2bc8287}

Get the next unit that matches the given class id and mode.

#### Parameters
* `dwClassId` The class id to look for.

* `dwMode` Either the mode being searched for, or a bitmask with bit 29 set and bits 0-28 corresponding to modes of units being searched for.

#### Returns
Whether another unit was found.

#### `public void `[`cancel`](#classUnit_1abdc2ecc5fb8044db1800438e876a5253)`()` {#classUnit_1abdc2ecc5fb8044db1800438e876a5253}

Cancel whatever's going on.

If there's scrolling text clear it. If you're interacting to an NPC, stop. If there's an item on the cursor, drop it. Otherwise close any other interaction that might be going on.

#### `public bool `[`repair`](#classUnit_1a6565698fe901074f3c7e61799e001430)`()` {#classUnit_1a6565698fe901074f3c7e61799e001430}

Try to repair.

Need to be able to find unit that you're trying to repair with. That means the unit needs to still be in the server unit hash table.

#### Returns
true if successful.

#### `public bool `[`useMenu`](#classUnit_1a504281991916f1881b30f9968c62526c)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` menuItem)` {#classUnit_1a504281991916f1881b30f9968c62526c}

Use an NPC menu.

Need to be able to find unit that you're trying to repair with. That means the unit needs to still be in the server unit hash table.

#### Parameters
* `menuItem` Index of the menu item to click.

#### Returns
true if menu was found.

#### `public bool `[`interact`](#classUnit_1a0c70c60dd71e4b039245f023a752c06e)`()` {#classUnit_1a0c70c60dd71e4b039245f023a752c06e}

Interact with the unit.

If the unit is an item in inventory or stash pick it up. Otherwise click it on the map.

#### `public bool `[`interact`](#classUnit_1aa1a4ac5b77fc8561252cad2af1ba9ba3)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` destId)` {#classUnit_1aa1a4ac5b77fc8561252cad2af1ba9ba3}

Interact with a waypoint.

If the unit is an object, assume it's a waypoint, and take it.

#### Parameters
* `destId` The area id of the destination to select.

#### `public `[`Unit`](#classUnit)` `[`getItem`](#classUnit_1addc8856287aeb65821942e4e209d8a2a)`(String name,uint32_t mode,uint32_t nUnitId)` {#classUnit_1addc8856287aeb65821942e4e209d8a2a}

Get an item from inventory by name, mode and nUnitId.

#### Parameters
* `name` The name of the unit to look for.

* `mode` Either the mode being searched for, or a bitmask with bit 29 set and bits 0-28 corresponding to modes of units being searched for.

* `nUnitId` The unique id of the unit.

#### Returns
The first item found that matches the description.

#### `public `[`Unit`](#classUnit)` `[`getItem`](#classUnit_1a4d0ddc5667c3b6dd4a15584b9f3b6eaa)`(uint32_t classId,uint32_t mode,uint32_t nUnitId)` {#classUnit_1a4d0ddc5667c3b6dd4a15584b9f3b6eaa}

Get an item from inventory by classId, mode and nUnitId.

#### Parameters
* `classId` The class id of the unit.

* `mode` Either the mode being searched for, or a bitmask with bit 29 set and bits 0-28 corresponding to modes of units being searched for.

* `nUnitId` The unique id of the unit.

#### Returns
The first item found that matches the description.

#### `public `[`Unit`](#classUnit)` `[`getItems`](#classUnit_1af421c40cb966dd2bef028c3ae2660e78)`()` {#classUnit_1af421c40cb966dd2bef028c3ae2660e78}

Get all items from inventory.

#### Returns
An array of all the items from inventory.

#### `public bool `[`getMerc`](#classUnit_1a33171db06dfdf2cc7d7826e1ea7242e4)`(bool dummy)` {#classUnit_1a33171db06dfdf2cc7d7826e1ea7242e4}

Get whether this player has a merc.

The unit being operated on should be a player.

#### Parameters
* `dummy` Used to signify boolean result instead of object. Should be true.

#### Returns
true if the player has a live merc.

#### `public `[`Unit`](#classUnit)` `[`getMerc`](#classUnit_1a765ff16754426875b9975e71c776a6ac)`()` {#classUnit_1a765ff16754426875b9975e71c776a6ac}

Get a player's merc.

The unit being operated on should be a player.

#### Returns
The merc if there is one.

#### `public String `[`getSkill`](#classUnit_1a85219a0b1d3856c432b6db80249ecc63)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` hand)` {#classUnit_1a85219a0b1d3856c432b6db80249ecc63}

Get skill name from hand.

#### Parameters
* `hand` Hand to get the skill name off.

0 - Right hand

1 - Left hand

#### Returns
Skill name.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classUnit_1a94823fedd1fb16eece0fe7fd729bb4e8)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` hand)` {#classUnit_1a94823fedd1fb16eece0fe7fd729bb4e8}

Get skill id from hand.

#### Parameters
* `hand` Hand to get the skill id off.

2 - Right hand

3 - Left hand

#### Returns
Skill id.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classUnit_1acfc83d3e88c549e6dae3c682c3baf40f)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dummy)` {#classUnit_1acfc83d3e88c549e6dae3c682c3baf40f}

Get all skills.

Gets all skill ids, along with corresponding base and total skill levels.

#### Parameters
* `dummy` Should be 4.

#### Returns
An array of arrays of integers. Inside the inner array the 0th index is the skill id, the 1st index is the base skill level and the 2nd index is the total skill level. Only the first 256 skills are read.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getSkill`](#classUnit_1ab14f99798787ec5b258a47824f089604)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSkillId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nExt)` {#classUnit_1ab14f99798787ec5b258a47824f089604}

Calls D2COMMON_GetSkillLevel and returns the result.

> Todo: Figure out what D2COMMON_GetSkillLevel does.

#### Returns
Whatever D2COMMON_GetSkillLevel returns.

#### `public `[`Unit`](#classUnit)` `[`getParent`](#classUnit_1aba1d739e034f714e07e5c66a1bcd8297)`()` {#classUnit_1aba1d739e034f714e07e5c66a1bcd8297}

Gets the parent of a unit.

This function is used for monster and item units.

#### Returns
The parent unit.

#### `public String `[`getParent`](#classUnit_1a59389e13f5a91193cc7c57a51372a529)`()` {#classUnit_1a59389e13f5a91193cc7c57a51372a529}

Gets the parent of a unit.

This function is used for object units.

#### Returns
The parent's name.

#### `public void `[`overhead`](#classUnit_1a3b8b22982ac3eb1dcefb354102a19a30)`(Object message)` {#classUnit_1a3b8b22982ac3eb1dcefb354102a19a30}

Puts the string equivalent of message over the unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getFlags`](#classUnit_1a01704c64338a7818f03ea9fdb0205ee6)`()` {#classUnit_1a01704c64338a7818f03ea9fdb0205ee6}

Returns the item flags.

#### Returns
Item flags:

0x00000001 - Equipped

0x00000008 - In socket

0x00000010 - Identified

0x00000040 - Weapon/shield is in the active weapon switch

0x00000080 - Weapon/shield is in the inactive weapon switch

0x00000100 - Item is broken

0x00000400 - Full rejuv

0x00000800 - Socketed

0x00002000 - In the trade or gamble screen

0x00004000 - Not in a socket

0x00010000 - Is an ear

0x00020000 - A starting item (worth only 1 gold)

0x00200000 - Rune, or potion, or mephisto's soulstone

0x00400000 - Ethereal

0x00800000 - Is an item

0x01000000 - Personalized

0x04000000 - Runeword

Source: [http://subversion.assembla.com/svn/d2bs/scripts/YAMB/libs/YAMB/common/YAM-Common.dbl](http://subversion.assembla.com/svn/d2bs/scripts/YAMB/libs/YAMB/common/YAM-Common.dbl) r1086

#### `public bool `[`getFlag`](#classUnit_1a66aba538357c70138e3126b022749f56)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` flags)` {#classUnit_1a66aba538357c70138e3126b022749f56}

Same as getFlags, but returns a boolean.

Returns true if any of the flags given match the item flags.

[getFlags](#classUnit_1a01704c64338a7818f03ea9fdb0205ee6)

#### Parameters
* `flags` Flags to check.

#### Returns
true if any of the flags are set in the item flags.

#### `public double `[`getStat`](#classUnit_1a273cc4dadf71bdf8c2ad9b6ee5ed122a)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` {#classUnit_1a273cc4dadf71bdf8c2ad9b6ee5ed122a}

Get a stat by stat id and sub index.

Used for stat 13.

#### Parameters
* `nStat` The stat type. See [http://forums.d2botnet.org/viewtopic.php?f=18&t=989](http://forums.d2botnet.org/viewtopic.php?f=18&t=989)

* `nSubIndex` A subindex to a certain type of stat. For instance a specific skill for the +1 to skill tab stat.

#### Returns
The stat value.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getStat`](#classUnit_1ab7cb6e0da97e16296f391f448630c4e0)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` {#classUnit_1ab7cb6e0da97e16296f391f448630c4e0}

Get a stat by stat id and sub index.

Used for everything except stat 13.

#### Parameters
* `nStat` The stat type. See [http://forums.d2botnet.org/viewtopic.php?f=18&t=989](http://forums.d2botnet.org/viewtopic.php?f=18&t=989)

* `nSubIndex` A subindex to a certain type of stat. For instance a specific skill for the +1 to skill tab stat.

#### Returns
The stat value.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getStat`](#classUnit_1a106c9cbe30bae8d80322f3ec1bc3aafa)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nStat,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSubIndex)` {#classUnit_1a106c9cbe30bae8d80322f3ec1bc3aafa}

Get an array of all the stats of the item.

#### Parameters
* `nStat` Set to -1.

* `nSubIndex` Ignored.

#### Returns
An array of the first 64 stats. The indices of the inner array are: 0 - nStat, 1 - nSubIndex, 2 - nValue.

#### `public bool `[`getState`](#classUnit_1a8ec41cccbb61db284264cc5879686a6d)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nState)` {#classUnit_1a8ec41cccbb61db284264cc5879686a6d}

Return whether or not the unit has a given state.

#### Parameters
* `nState` The state id.

#### Returns
Whether or not the unit has the state.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classUnit_1ac12f87a160fd951c157ab1107029a2d9)`(`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell)` {#classUnit_1ac12f87a160fd951c157ab1107029a2d9}

Get the price of the item at a given npc, with choice of buying or selling, in the current difficulty.

> Todo: Determine the meaning of "buysell".

#### Parameters
* `npc` The npc to determine the price at.

* `buysell` Unknown

#### Returns
The price requested.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classUnit_1acb192f1005a38a4c7090c0a7f64d2c50)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` npcId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell)` {#classUnit_1acb192f1005a38a4c7090c0a7f64d2c50}

Get the price of the item at a given npc (by id), which choice of buying or selling, in the current difficulty.

> Todo: Determine the meaning of "buysell".

#### Parameters
* `npcId` The id of the npc to determine the price at.

* `buysell` Unknown

#### Returns
The price requested.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classUnit_1aa8ba674e6441c93355844d49619998e8)`(`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` difficulty)` {#classUnit_1aa8ba674e6441c93355844d49619998e8}

Get the price of the item at a given npc, with choice of buying or selling, in a given difficulty.

> Todo: Determine the meaning of "buysell".

#### Parameters
* `npc` The npc to determine the price at.

* `buysell` Unknown

* `difficulty` The difficulty of interest: 0 - normal, 1 - nightmare, 2 - hell

#### Returns
The price requested.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getPrice`](#classUnit_1a4b9c81d08835307ba5900dc99c8b9313)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` npcId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` buysell,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` difficulty)` {#classUnit_1a4b9c81d08835307ba5900dc99c8b9313}

Get the price of the item at a given npc (by id), with choice of buying or selling, in a given difficulty.

> Todo: Determine the meaning of "buysell".

#### Parameters
* `npcId` The id of the npc to determine the price at.

* `buysell` Unknown

* `difficulty` The difficulty of interest: 0 - normal, 1 - nightmare, 2 - hell

#### Returns
The price requested.

#### `public bool `[`getEnchant`](#classUnit_1a082ad92039c9a817574adb3431ddb159)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nEnchant)` {#classUnit_1a082ad92039c9a817574adb3431ddb159}

Determine whether or not a unit has a given enchant.

#### Parameters
* `nEnchant` Enchantment id.

#### Returns
Whether or not the unit has the enchantment.

#### `public bool `[`shop`](#classUnit_1aa4e63e5e27420a6965bda5d855bb8c49)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` dwMode)` {#classUnit_1aa4e63e5e27420a6965bda5d855bb8c49}

Shop with a given npc, either buying or selling.

#### Parameters
* `dwMode` What to do with the item. 1 - Sell, 2 - Buy, 6 - ?

#### Returns
Whether or not the shop went through.

#### `public bool `[`setSkill`](#classUnit_1a89e811c8b062728894b6504a8f02372d)`(String skillName,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand)` {#classUnit_1a89e811c8b062728894b6504a8f02372d}

Set the skill on the given hand to be skill with name skillName.

Waits up to one second for the skill to be set.

> Todo: Fix argc < 1, should be argc < 2

#### Parameters
* `skillName` Name of the skill to put up.

* `nHand` Hand to put the skill on. non-zero left, 0 - right.

#### Returns
Whether operation was successful.

#### `public bool `[`setSkill`](#classUnit_1a3f88599825b6b93e1bf52f9c13df0a95)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nSkillId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nHand)` {#classUnit_1a3f88599825b6b93e1bf52f9c13df0a95}

Set the skill on the given hand to be skill with id nSkillId.

Waits up to one second for the skill to be set.

> Todo: Fix argc < 1, should be argc < 2

#### Parameters
* `nSkillId` Id of the skill to put up.

* `nHand` Hand to put the skill on. non-zero left, 0 - right.

#### Returns
Whether operation was successful.

#### `public void `[`move`](#classUnit_1a0b13c1bcd85e4a2fda08548feef07d0b)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` x,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` y)` {#classUnit_1a0b13c1bcd85e4a2fda08548feef07d0b}

Move to the given location.

#### Parameters
* `x` The x location.

* `y` The y location.

#### `public void `[`move`](#classUnit_1a4a295cc929f3a8ccf67287d4f6f5515b)`()` {#classUnit_1a4a295cc929f3a8ccf67287d4f6f5515b}

Move to this unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getQuest`](#classUnit_1afbb11a6c2f4457b19fd464c1df647065)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nAct,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nQuest)` {#classUnit_1afbb11a6c2f4457b19fd464c1df647065}

Get the quest flag for a quest specified by act and quest number.

#### Parameters
* `nAct` The act of the quest.

* `nQuest` The quest number.

#### Returns
The quest flag for the specified quest.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getMinionCount`](#classUnit_1a1cf6810c2589b47f74cfa125375d75ed)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nType)` {#classUnit_1a1cf6810c2589b47f74cfa125375d75ed}

Get the number of minions of a certain type.

#### Parameters
* `nType` The type of the minions.

#### Returns
The number of minions of the specified type.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getRepairCost`](#classUnit_1ae007a9f727a4f34f40e5bb4d0867897b)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId)` {#classUnit_1ae007a9f727a4f34f40e5bb4d0867897b}

Get price to repair this unit at the current npc given by nNpcClassId.

#### Parameters
* `nNpcClassId` The class id of the npc to get the price for repair at.

#### Returns
The price to repair the given unit.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classUnit_1a18eb04eaed8f97b76aacbd8b2734f563)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId)` {#classUnit_1a18eb04eaed8f97b76aacbd8b2734f563}

Get the cost to do something (buy, sell, repair) with the given item, at the given npc.

#### Parameters
* `nMode` What to do: 0 - buy, 1 - sell, 2 - repair.

* `nNpcClassId` The class id of the npc to check the price with.

#### Returns
The price.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classUnit_1ac27394b9daab7a7c1c457ab6121910f8)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nNpcClassId,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nDifficulty)` {#classUnit_1ac27394b9daab7a7c1c457ab6121910f8}

Get the cost to do something (buy, sell, repair) with the given item, at the given npc, in the given difficulty.

#### Parameters
* `nMode` What to do: 0 - buy, 1 - sell, 2 - repair.

* `nNpcClassId` The class id of the npc to check the price with.

* `nDifficulty` The difficulty to check the price in.

#### Returns
The price.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classUnit_1a9db71041710e126f77d3a2eb2526fd9a)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`Unit`](#classUnit)` npc,`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nDifficulty)` {#classUnit_1a9db71041710e126f77d3a2eb2526fd9a}

Get the cost to do something (buy, sell, repair) with the given item, at the given npc, in the given difficulty.

#### Parameters
* `nMode` What to do: 0 - buy, 1 - sell, 2 - repair.

* `npc` The npc to check the price with.

* `nDifficulty` The difficulty to check the price in.

#### Returns
The price.

#### `public `[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` `[`getItemCost`](#classUnit_1ae375f1e4e46cdc39c29a947d7add4765)`(`[`int`](#group__handlers_1gad45ee50356f6b4f157faf0c8e44217ac)` nMode,`[`Unit`](#classUnit)` npc)` {#classUnit_1ae375f1e4e46cdc39c29a947d7add4765}

Get the cost to do something (buy, sell, repair) with the given item, at the given npc.

#### Parameters
* `nMode` What to do: 0 - buy, 1 - sell, 2 - repair.

* `npc` The npc to check the price with.

#### Returns
The price.

Generated by [Moxygen](https://sourcey.com/moxygen)