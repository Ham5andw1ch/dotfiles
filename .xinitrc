 ~/.config/wpg/wp_init.sh
xautolock -detectsleep -time 5 -nowlocker "i3BlurLock" -locker "i3BlurLock" -notify 30  -notifier "notify-send -u critical -t 10000 -- 'LOCKING screen in 30 seconds'"&
xrandr --output HDMI-0 --mode 1920x1080 --pos 1440x-150  --output DVI-D-0 --mode 1440x900 --pos 0x0
xss-lock -- "i3BlurLock"&
systemctl --user import-environment DISPLAY
exec i3 
