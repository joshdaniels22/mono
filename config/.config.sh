#!/bin/bash

# Check if its working
alias isitworking='echo yeah'

# Bash Stuff
alias into='cd'
alias out='cd ..'
alias back='cd -'
alias own='sudo chown -R user:user .' # makes everything owned by current user, not root

# Git Stuff
alias gs='git status'
alias gb='git branch'
alias gc='git commit'
alias gcm='git commit -m'
alias ga='git add .'
alias gp='git push'

# Docker Stuff
alias dc="docker-compose" 
alias dps="docker ps -a --format 'table {{.ID}}\t{{.Names}}\t{{.Status}}'"
alias dx='docker rm -f `docker ps -qa`'

# Golang Stuff
alias ginkgone='ginkgo -r -v -tags=unit_test --failOnPending --progress --trace'
