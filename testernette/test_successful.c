/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_successful.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:26:19 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 08:26:20 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void    test_successful(int test)
{
    printf("	\033[0;32mTest %d: OK\033[0m\n", test);
}

// Creating alias: https://wpbeaches.com/make-an-alias-in-bash-or-zsh-shell-in-macos-with-terminal/
//                 -> nano ~/.zshrc
//                 -> alias gccw='gcc -Wall -Werror -Wextra'
//                 -> control+o and enter and control+x
//                 -> source ~/.zshrc

// Output: https://www.theurbanpenguin.com/4184-2/
//     Color
//         -> Black \033[0;30m]
//         -> Red \033[0;31m]
//         -> Green \033[0;32m]
//         -> Yellow \033[0;33m]
//         -> Blue \033[0;34m]
//         -> Purple \033[0;35m]
//         -> Cyan \033[0;36m]
//         -> White \033[0;37m] (or greater)
//     Type
//         -> None \033[0;37m]
//         -> Bold \033[1;37m]
//         -> Dark \033[2;37m]
//         -> Cursive \033[3;37m]
//         -> Underlined \033[4;37m]
