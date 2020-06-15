connect -url tcp:127.0.0.1:3121
configparams mdm-detect-bscan-mask 2
targets -set -nocase -filter {name =~ "microblaze*#0" && bscan=="USER2"  && jtag_cable_name =~ "Digilent Basys3 210183795565A"} -index 0
rst -processor
targets -set -nocase -filter {name =~ "microblaze*#0" && bscan=="USER2"  && jtag_cable_name =~ "Digilent Basys3 210183795565A"} -index 0
dow C:/Users/Waysker/Desktop/Studia/HardestGameEver/Projekt/Basys3_Game/vivado/microblaze_VGA/microblaze_VGA.sdk/Game/Debug/Game.elf
bpadd -addr &main
