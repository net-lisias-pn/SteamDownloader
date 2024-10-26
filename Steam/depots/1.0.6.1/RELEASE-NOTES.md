# 1.0.6.1 Released Officially

Hello Nomads,

We've just released the 1.0.6.1 version to the public branch, so everyone can now use our new Tech Tree and improved Creative mode.

Here is recap of all changes:

* 1.0.6.0:
	+ New features - Blocks
		- added new blocks - armor and glass pieces
		- rearranged all blocks into more cateogories, according to their intended usage (bases, vehicles, cargo,...)
		- added a Tech Tree view (switch button in top right corner in the Block Catalog) - displays all in-game blocks, even locked ones with the lock reason (ie. by quest etc.)
	+ New features - Creative
		- added welding & cutting of blocks into the Creative Mode - with Multitool you can create "unfinished" states of blocks, with a block equipped, you delete blocks by one click (as you are used to)
		- possible to use other tools - Block Mover, Weapon, Scanner - you need to set them to some key in keybinding in options, as there are no inventory in Creative
	+ New features - Building
		- added keyboard modifier for building "in the air" - it's now possible to build ungrounded blocks
		- faster block coloring (mainly in Creative)
	+ Bugfixes
		- temporary switch from 1st person to 3rd person close-up if camera is behind the wall - to prevent looking "through the wall"
		- fixed colliders on Hinge joints - reduced unnecessary vibrations in extreme positions
		- fixed graphical glitch with weather - roofing does not influence fog appearance anymore
		- fixed some overflows in HDR post-processing - hopefully eliminated the "black ink smearing" bug
		- fixed blocked Quests functionality (in case player exited the Drop Pod too early)
		- tutorial: removed direct block equip of a block without using Hotbar (a little advanced feature for newcomers, could lead to deadlock in tutorial)
		- tutorial: removed altimeter from cockpit UI
* 1.0.6.1
	+ added colorization masks to small glass blocks and top parts of cockpits
	+ fixed saving of block weld state in creative
	+ Tutorial: lowered distance limit for dynamic light shadows (performance fix)
	+ Tutorial: fixed bug with crouch (tutorial was impossible to finish sometimes)
	+ Block Catalog: changed default filter to "ALL" and added scrolling up on open
	+ Tools/Weapon: fixed switching to wrong tool by mapped keys
	+ Block Mover: fixed graphic glitch (mainly after starting/loading the game)
	+ Thermoregulator: fixed non-working state if loaded game in cockpit
	+ Bug Reporter: fixed not sending logfiles (changed paths for new Unity log file locations), also added sending of previous log file
	+ Options: added setting to disable the "teporary 3rd person"
