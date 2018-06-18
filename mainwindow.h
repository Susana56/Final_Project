#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <string>
#include <map>
#include <stdlib.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool Button_Clicked(std::string word);
    std::vector<std::string> vec;

    void fill_vec();


private:
    Ui::MainWindow *ui;

private slots:

    void on_pushButton_1A_clicked();
    void on_pushButton_1B_clicked();
    void on_pushButton_1C_clicked();
    void on_pushButton_1D_clicked();
    void on_pushButton_1E_clicked();
    void on_pushButton_1F_clicked();
    void on_pushButton_1G_clicked();
    void on_pushButton_1H_clicked();
    void on_pushButton_1I_clicked();
    void on_pushButton_1J_clicked();
    void on_pushButton_2A_clicked();
    void on_pushButton_2B_clicked();
    void on_pushButton_2C_clicked();
    void on_pushButton_2D_clicked();
    void on_pushButton_2E_clicked();
    void on_pushButton_2F_clicked();
    void on_pushButton_2G_clicked();
    void on_pushButton_2H_clicked();
    void on_pushButton_2I_clicked();
    void on_pushButton_2J_clicked();
    void on_pushButton_3A_clicked();
    void on_pushButton_3B_clicked();
    void on_pushButton_3C_clicked();
    void on_pushButton_3D_clicked();
    void on_pushButton_3E_clicked();
    void on_pushButton_3F_clicked();
    void on_pushButton_3G_clicked();
    void on_pushButton_3H_clicked();
    void on_pushButton_3I_clicked();
    void on_pushButton_3J_clicked();
    void on_pushButton_4A_clicked();
    void on_pushButton_4B_clicked();
    void on_pushButton_4C_clicked();
    void on_pushButton_4D_clicked();
    void on_pushButton_4E_clicked();
    void on_pushButton_4F_clicked();
    void on_pushButton_4G_clicked();
    void on_pushButton_4H_clicked();
    void on_pushButton_4I_clicked();
    void on_pushButton_4J_clicked();
    void on_pushButton_5A_clicked();
    void on_pushButton_5B_clicked();
    void on_pushButton_5C_clicked();
    void on_pushButton_5D_clicked();
    void on_pushButton_5E_clicked();
    void on_pushButton_5F_clicked();
    void on_pushButton_5G_clicked();
    void on_pushButton_5H_clicked();
    void on_pushButton_5I_clicked();
    void on_pushButton_5J_clicked();
    void on_pushButton_6A_clicked();
    void on_pushButton_6B_clicked();
    void on_pushButton_6C_clicked();
    void on_pushButton_6D_clicked();
    void on_pushButton_6E_clicked();
    void on_pushButton_6F_clicked();
    void on_pushButton_6G_clicked();
    void on_pushButton_6H_clicked();
    void on_pushButton_6I_clicked();
    void on_pushButton_6J_clicked();
    void on_pushButton_7A_clicked();
    void on_pushButton_7B_clicked();
    void on_pushButton_7C_clicked();
    void on_pushButton_7D_clicked();
    void on_pushButton_7E_clicked();
    void on_pushButton_7F_clicked();
    void on_pushButton_7G_clicked();
    void on_pushButton_7H_clicked();
    void on_pushButton_7I_clicked();
    void on_pushButton_7J_clicked();
    void on_pushButton_8A_clicked();
    void on_pushButton_8B_clicked();
    void on_pushButton_8C_clicked();
    void on_pushButton_8D_clicked();
    void on_pushButton_8E_clicked();
    void on_pushButton_8F_clicked();
    void on_pushButton_8G_clicked();
    void on_pushButton_8H_clicked();
    void on_pushButton_8I_clicked();
    void on_pushButton_8J_clicked();
    void on_pushButton_9A_clicked();
    void on_pushButton_9B_clicked();
    void on_pushButton_9C_clicked();
    void on_pushButton_9D_clicked();
    void on_pushButton_9E_clicked();
    void on_pushButton_9F_clicked();
    void on_pushButton_9G_clicked();
    void on_pushButton_9H_clicked();
    void on_pushButton_9I_clicked();
    void on_pushButton_9J_clicked();
    void on_pushButton_10A_clicked();
    void on_pushButton_10B_clicked();
    void on_pushButton_10C_clicked();
    void on_pushButton_10D_clicked();
    void on_pushButton_10E_clicked();
    void on_pushButton_10F_clicked();
    void on_pushButton_10G_clicked();
    void on_pushButton_10H_clicked();
    void on_pushButton_10I_clicked();
    void on_pushButton_10J_clicked();
};

#endif // MAINWINDOW_H
