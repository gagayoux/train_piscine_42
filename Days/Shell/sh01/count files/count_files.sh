# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/29 17:26:00 by user42            #+#    #+#              #
#    Updated: 2020/07/29 17:38:33 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . -type f -o -type d | wc -l