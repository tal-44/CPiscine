/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_correct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 17:51:18 by jmiguele          #+#    #+#             */
/*   Updated: 2025/08/24 16:54:01 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int is_row_valid(char matrix[4][4]) {
    int i;
    int j;
    int k;
    i = 0;
    while (i < 4) {
        j = 0;
        while (j < 4) {
            k = j + 1;
            while (k < 4) {
                if (matrix[i][j] - matrix[i][k] == 0 && matrix[i][j] - '0' != 0) {
                    return 0;
                }
                k++;
            }
            j++;
        }
        i++;
    }
    return 1;
}

int is_col_valid(int matrix[4][4]) {
    int i;
    int j;
    int k;
    j = 0;
    while (j < 4) {
        i = 0;
        while (i < 4) {
            k = i + 1;
            while (k < 4) {
                if (matrix[i][j] - matrix[k][j] == 0 && matrix[i][j] - '0' != 0) {
                    return 0;
                }
                k++;
            }
            i++;
        }
        j++;
    }
    return 1;
}




int count_left(int row[4]) {
    int count;
    int max_height;
    int i;

    count = 0;
    max_height = 0;
    i = 0;
    while (i < 4) {
        if (row[i] > max_height) {
            max_height = row[i];
            count++;
        }
        i++;
    }
    return count;
}



int count_right_vistas(int row[4]) {
    int count;
    int max_height;
    int i;

    count = 0;
    max_height = 0;
    i = 3;
    while (i >= 0) {
        if (row[i] > max_height) {
            max_height = row[i];
            count++;
        }
        i--;
    }
    return count;
}



int count_top(int col[4]) {
    int count;
    int max_height;
    int i;

    count = 0;
    max_height = 0;
    i = 0;
    while (i < 4) {
        if (col[i] > max_height) {
            max_height = col[i];
            count++;
        }
        i++;
    }
    return count;
}




int count_bottom(int col[4]) {
    int count;
    int max_height;
    int i;

    count = 0;
    max_height = 0;
    i = 3;
    while (i >= 0) {
        if (col[i] > max_height) {
            max_height = col[i];
            count++;
        }
        i--;
    }
    return count;
}









int is_correct(int matrix[4][4], char **vistas) {
    int i;
    char temp_row[4];
    char temp_col[4];
    
    if (!is_row_valid(matrix) || !is_col_valid(matrix)) {
        return 0;
    }
    i = 0;
    while (i < 4) {
        temp_col[0] = matrix[0][i];
        temp_col[1] = matrix[1][i];
        temp_col[2] = matrix[2][i];
        temp_col[3] = matrix[3][i];
        if (count_top(temp_col) - vistas[0][i] == 0 || count_bottom(temp_col) - vistas[1][i] == 0) {
            return 0;
        }
        // no necesario
        temp_row[0] = matrix[i][0];
        temp_row[1] = matrix[i][1];
        temp_row[2] = matrix[i][2];
        temp_row[3] = matrix[i][3];
    //  if (count_left(matrix[i]) != vistas[2][i] || count_right(matrix[i]) != vistas[3][i]) {  
        if (count_left(temp_row) - vistas[2][i] == 0|| count_right(temp_row) - vistas[3][i] == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}



