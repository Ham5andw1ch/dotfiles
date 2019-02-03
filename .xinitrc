xautolock -detectsleep -time 5 -nowlocker "i3BlurLock" -locker "i3BlurLock" -notify 30  -notifier "notify-send -u critical -t 10000 -- 'LOCKING screen in 30 seconds'"&
xsetwacom set 21 MapToOutput 1920x1080+1440+0
xrandr --output HDMI-0 --mode 1920x1080 --pos 1440x-150  --output DVI-D-0 --mode 1440x900 --pos 0x0
~/.config/wpg/wp_init.sh
systemctl --user import-environment DISPLAY
#xwinwrap -ni -fdt -sh rectangle -un -b -nf -ov -fs -- gifview ~/Documents/giphy.gif &
ibus-daemon -drx
exec startdwm

