# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/29 17:53:20 by user42            #+#    #+#              #
#    Updated: 2020/07/29 18:00:52 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig -a | grep ether | tr -d ' ' | cut -c 6-22