set runtimepath^=~/.vim runtimepath+=~/.vim/after
    let &packpath = &runtimepath
    source ~/.vimrc

    map <F2> : NERDTreeToggle<CR>
    map <F3> : TagbarToggle<CR>
"set noshowmode
colorscheme wpgtk
let g:airline_theme='wal'
