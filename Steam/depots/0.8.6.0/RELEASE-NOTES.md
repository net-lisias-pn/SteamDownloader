# 0.8.6 Large Air Blade

Hello Nomads,

This release brings promised Large Air Blade block. It means more power and less adjusting for your large aircrafts.

We've also included some little tweaks to physics, building system and game performance.

Full list of changes:

* New block: Large Air Blade
* Switches disconnected by distance automatically reconnect on comeback - useful for recharging batteries of your rovers
* Improved physics stability (changed the way how inertia tensors is computed)
* Building system tweaks:
	+ disabled grid snapping if not possible to build in given place
	+ changed build distance for different block sizes
	+ added effect on block removal
* Performance tweaks:
	+ added object visibility distance settings: low and very high
	+ added option to completely disable decorative grass objects
	+ fixed slow loading of saves with many pipes
	+ disabled planet map rendering where not necessary
	+ changed order of rendering distant trees
	+ dynamic object batching
