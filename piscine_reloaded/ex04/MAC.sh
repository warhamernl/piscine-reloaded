# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    MAC.sh                                             :+:    :+:             #
#                                                      +:+                     #
#    By: mlokhors <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/18 15:56:32 by mlokhors      #+#    #+#                  #
#    Updated: 2019/03/20 17:50:40 by mlokhors      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

ifconfig -a | grep "ether " | cut -f 2 | awk '{$1=$1;print}' | sed 's/ether //g'