# 0.8.12.1 Hotfix

Hello Nomads,

Sadly, last release had a very serious bug that caused save corruption in some cases with automatic miners. As a result active block data wasn't saved and active blocks were missing after the load. This hotfix addresses that issue, but corrupted saves cannot be fixed. We are very sorry about that. You could try to load older saves or find a backup save in saves folder.

We've also removed height limit of hover blades and changed logic not to count with unpowered blades, as it sometimes made impossible to ascend or descend with air crafts. The whole hover blade code is very patched now, and still far form ideal, so we are considering total rework of it.
