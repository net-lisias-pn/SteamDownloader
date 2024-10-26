# 0.9.8.4 Relesed to Public Branch

Hello Nomads,

We've just released 0.9.8.4 into the public branch for all players.

Repeated list of changes since last stable update (0.9.8.1):

* 0.9.8.2
	+ Windows: new build using IL2CPP (should be faster in case of high CPU & low GPU usage)
	+ modified physics to do less transform sync - caused low CPU usage due to thread locks probably (should fix FPS drop after longer gameplay)
	+ fixed saving of hower blade height (should eliminate helicopter bumps on load/approach)
	+ planet map: right click on custom POI deletes it
	+ various minor script optimizations
* 0.9.8.3
	+ fixed bug in saving sampled resources from Mining Machine
	+ fixed Steam library compatibility with IL2CPP (broken workshop window close button)
	+ fixed short drop in Solar Panel energy production on load
	+ workaround for physics collisions bug (caused Jetpack hover mode disabled on load)
* 0.9.8.4
	+ fixed player falling down through the terrain
	+ modified memory management to prevent frequent frame drops

