# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    find_sh.sh                                         :+:    :+:             #
#                                                      +:+                     #
#    By: mlokhors <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/18 15:37:40 by mlokhors      #+#    #+#                  #
#    Updated: 2019/03/18 15:46:31 by mlokhors      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

find . -type f -name "*.sh" -exec basename {} \; | tr -d ".sh"
