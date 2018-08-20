#!/bin/bash
CHOICE="$(echo -e "Exit\nLock\nShutdown\nRestart" | dmenu -fn 'Noto Mono:style=Regular:size=12' -nb '#2e3237' -sf '#2e3237' -sb '#889190' -nf '#dfdfdf')"
case  $CHOICE  in 
	"E"|"e"|"Exit")
		killall xinit
		;;
	"L"|"l"|"Lock")
		xautolock -locknow
		;;
	"S"|"s"|"Shutdown")
		systemctl poweroff
		;;
	"R"|"r"|"Restart")
		systemctl reboot
		;;
	*)
esac
