# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/29 16:56:57 by user42            #+#    #+#              #
#    Updated: 2020/07/29 17:29:55 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . -type f -name '*.sh' | sed 's/.*\///' | sed 's/...$//'