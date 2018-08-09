 ~/.config/wpg/wp_init.sh
xautolock -detectsleep -time 3 -nowlocker "i3BlurLock" -locker "i3BlurLock" -notify 30  -notifier "notify-send -u critical -t 10000 -- 'LOCKING screen in 30 seconds'"&
xss-lock -- "i3BlurLock"&
exec i3 
