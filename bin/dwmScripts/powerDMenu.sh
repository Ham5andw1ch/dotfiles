#!/bin/bash
CHOICE="$(echo -e "Exit\nLock\nShutdown\nRestart" | dmenu -fn 'Hack-Regular:size=10' -nb '#2e3237' -sb '#2e3237' -nf '#889190' -sf '#dfdfdf')"
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
