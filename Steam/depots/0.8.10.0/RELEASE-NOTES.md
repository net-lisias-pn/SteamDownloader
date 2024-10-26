# 0.8.10 Hotbar tweaks

![](https://cdn.steamstatic.com/steamcommunity/public/images/clans/26094833/4a47f23b55659f8e510fce59e08184960fb67fa8.png)

Hello Nomads,

We have started this update with a serie of building interface improvements. You can now use 10 hotbars with blocks. Switch between them with shift + number. If you prefer one-time use of a given block, click with shift in build catalog and you can build without using a hotbar. You can also use text filter in block catalog.

In this release we have done some changes in the way how your buildings and vehicles are treated. This should fix troubles like vehicles merging with buildings during save/load as well as disappearing of big bridges while you still stand on it. Those changes are still in evaluation, so let us know if you find some issues with it.

Last but not least, we have added three long awaited block types with conveyor ports.

The full list of changes follows.

* New features:
	+ ten "pages" in building hotbar, use shift+0..9 to switch them
	+ shift+click in block catalog equips block without using hotbar
	+ filter by name in the block catalog
	+ weather in advanced survival settings
* New blocks:
	+ ceiling/floor block with conveyor port
	+ interior wall with conveyor port
	+ six way conveyor
* Bugfixes:
	+ not unloading big bridges while walking away from its origin
	+ physics freeze of distant vehicles to overcome some bugs on unloading
	+ saving vehicle movement speed
	+ saving unfinished work of printers
	+ fixed ghostblock jitter
	+ fixed occasional missing drop pod and other wreckage
	+ fixed randomly vanishing electricity connections
	+ fixed center of mass indicator misbehavior
	+ fixed jetpack hover mode (didn't descend at max height)
	+ item dispenser disables on entering vehicle
