# 0.9.6.0 Bug Fixes

Hello Nomads,

The new release of Planet Nomads is here! This time we have added just some longly awaited bugfixes and optimizations. So without further delay, here is the full list:

* Bug fixes
	+ SandyEngine: fixed holes in generated terrain meshes on chunk boundaries
	+ Terminal: fixed unintended closing (by pressing "T" during block rename)
	+ Generator: fixed misbehavior after load, connecting Containers, welding and other events
	+ Interior Cockpit: fixed Center of mass
	+ Railing: fixed texture wrapping
	+ Hover Pad: fixed ground detection
	+ Character: fixed unnatural neck positions in animations
	+ Jetpack: fixed wrong behavior when running out of suit energy
	+ Multitool: action delay kept only on destructive actions
	+ UI: fixed "saving game" info box obstructed by blur effect
	+ Bug Reporter: fixed log file retrieval
	+ Bug Reporter: fixed endless freeze while sending report
	+ Linux: removed unreliable batch processing in SQLite
	+ Linux: fixed water shader depth calculation (added foam on shallow water)
	+ Linux: fixed fog shader depth calculation (to exclude sky from being fogged)
* Optimizations
	+ Terrain Shader: reduced number of texture fetches if not all voxel slots are used
	+ Containers, Printers: changed recalculation logic to eliminate lags during container content modification
	+ Quality settings: disabled anisotropic texture filtering in default quality settings (except for Ultra)
	+ Quality settings: disabled grass on Low setting
	+ Quality settings: Sky, Clouds and Water meshes replaced by dynamically generated low poly ones with adjustable quality
	+ Bug Reporter: sending screenshots as JPG
	+ Bug Reporter: compression of log and text files
* Others
	+ Bug Reporter: added whisperer (searching for similar bugs before entering a new one)
	+ Splash Screen: updated Craneballs logo

