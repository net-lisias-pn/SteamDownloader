#1.0.3.2 Released publicly

![](https://steamcommunity.com/linkfilter/?u=https%3A%2F%2Fsteamcdn-a.akamaihd.net%2Fsteamcommunity%2Fpublic%2Fimages%2Fclans%2F26094833%2F1242eef0d9fe258279d344ec72637a4a8a1cf228.png)

Hello Nomads,

We've just released update 1.0.3.2.

The full list of changes since last public version:

* new block: **Autonomous Water Purifier**
* increased distance and intensity of vehicle search lights
* added setting to change/disable the automatic miner excavation limit
* added lights on the Bike blueprint
* finished Czech translation



Various bugfixes ():

* added saving of player crouch state (before, if you saved crouched under some block, it would kill you by loading you in standing position with your head inside the block)
* added more tries for world generator to put Terry's ship on dry place (it might cause different ship positions on same seed than in previous version, but only in new games)
* better visualization of finished, non finished and mutally exclusive quest tasks
* fixed sorting of UI (tutorial messages over the menu)
* tech tree: fixed access to some blocks (Short Basic Slope Wall 1x4, Short Basic Slope Corner Wall) for non-kickstarter players
* fixed workshop blueprint API to support more than 50 subscribed items
* fixed error in case of invalid blueprint
* fixed error caused by splitting grid with Suspension / Hinge / Rotor
* fixed frozen POIs in compass
* fixed Radar scan working only after Map refresh
* added notification about map being locked in the early game
* added random timeout before crafting (performance fix for lags in case of many synchronously running printers)
* disabled exit where entered functionality in cockpit (to prevent exiting in open-space)
* hidden inventory and compass while sleeping 
