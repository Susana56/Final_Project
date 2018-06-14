#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIcon>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd(":/Images/water.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::Button_Clicked(std::string word){
    for(size_t i=0; i < vec.size(); i++){
          if(vec[i] == word){
            return true;
        }
   }
    return false;
}

void MainWindow::on_pushButton_1A_clicked()
{
    if(Button_Clicked("1A") == true){
        ui->pushButton_1A->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_1A->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_1A->setText("・");
    }
}

void MainWindow::on_pushButton_1B_clicked()
{
    if(Button_Clicked("1B") == true){
        ui->pushButton_1B->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_1B->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_1B->setText("・");
    }
}

void MainWindow::on_pushButton_1C_clicked()
{
    if(Button_Clicked("1C") == true){
        ui->pushButton_1C->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_1C->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_1C->setText("・");
    }
}

void MainWindow::on_pushButton_1D_clicked()
{
    if(Button_Clicked("1D") == true){
        ui->pushButton_1D->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_1D->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_1D->setText("・");
    }
}

void MainWindow::on_pushButton_1E_clicked()
{
    if(Button_Clicked("1E") == true){
        ui->pushButton_1E->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_1E->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_1E->setText("・");
    }
}

void MainWindow::on_pushButton_1F_clicked()
{
    if(Button_Clicked("1F") == true){
        ui->pushButton_1F->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_1F->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_1F->setText("・");
    }
}

void MainWindow::on_pushButton_1G_clicked()
{
    if(Button_Clicked("1G") == true){
        ui->pushButton_1G->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_1G->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_1G->setText("・");
    }
}

void MainWindow::on_pushButton_1H_clicked()
{
    if(Button_Clicked("1H") == true){
        ui->pushButton_1H->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_1H->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_1H->setText("・");
    }
}

void MainWindow::on_pushButton_1I_clicked()
{
    if(Button_Clicked("1I") == true){
        ui->pushButton_1I->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_1I->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_1I->setText("・");
    }
}

void MainWindow::on_pushButton_1J_clicked()
{
    if(Button_Clicked("1J") == true){
        ui->pushButton_1J->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_1J->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_1J->setText("・");
    }
}

void MainWindow::on_pushButton_2A_clicked()
{
    if(Button_Clicked("2A") == true){
        ui->pushButton_2A->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_2A->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_2A->setText("・");
    }
}

void MainWindow::on_pushButton_2B_clicked()
{
    if(Button_Clicked("2B") == true){
        ui->pushButton_2B->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_2B->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_2B->setText("・");
    }
}

void MainWindow::on_pushButton_2C_clicked()
{
    if(Button_Clicked("2C") == true){
        ui->pushButton_2C->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_2C->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_2C->setText("・");
    }
}

void MainWindow::on_pushButton_2D_clicked()
{
    if(Button_Clicked("2D") == true){
        ui->pushButton_2D->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_2D->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_2D->setText("・");
    }
}

void MainWindow::on_pushButton_2E_clicked()
{
    if(Button_Clicked("2E") == true){
        ui->pushButton_2E->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_2E->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_2E->setText("・");
    }
}

void MainWindow::on_pushButton_2F_clicked()
{
    if(Button_Clicked("2F") == true){
        ui->pushButton_2F->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_2F->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_2F->setText("・");
    }
}

void MainWindow::on_pushButton_2G_clicked()
{
    if(Button_Clicked("2G") == true){
        ui->pushButton_2G->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_2G->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_2G->setText("・");
    }
}


void MainWindow::on_pushButton_2H_clicked()
{
    if(Button_Clicked("2H") == true){
        ui->pushButton_2H->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_2H->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_2H->setText("・");
    }
}

void MainWindow::on_pushButton_2I_clicked()
{
    if(Button_Clicked("2I") == true){
        ui->pushButton_2I->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_2I->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_2I->setText("・");
    }
}

void MainWindow::on_pushButton_2J_clicked()
{
    if(Button_Clicked("2J") == true){
        ui->pushButton_2J->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_2J->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_2J->setText("・");
    }
}

void MainWindow::on_pushButton_3A_clicked()
{
    if(Button_Clicked("3A") == true){
        ui->pushButton_3A->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_3A->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_3A->setText("・");
    }
}

void MainWindow::on_pushButton_3B_clicked()
{
    if(Button_Clicked("3B") == true){
        ui->pushButton_3B->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_3B->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_3B->setText("・");
    }
}

void MainWindow::on_pushButton_3C_clicked()
{
    if(Button_Clicked("3C") == true){
        ui->pushButton_3C->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_3C->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_3C->setText("・");
    }
}

void MainWindow::on_pushButton_3D_clicked()
{
    if(Button_Clicked("3D") == true){
        ui->pushButton_3D->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_3D->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_3D->setText("・");
    }
}

void MainWindow::on_pushButton_3E_clicked()
{
    if(Button_Clicked("3E") == true){
        ui->pushButton_3E->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_3E->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_3E->setText("・");
    }
}


void MainWindow::on_pushButton_3F_clicked()
{
    if(Button_Clicked("3F") == true){
        ui->pushButton_3F->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_3F->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_3F->setText("・");
    }
}

void MainWindow::on_pushButton_3G_clicked()
{
    if(Button_Clicked("3G") == true){
        ui->pushButton_3G->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_3G->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_3G->setText("・");
    }
}

void MainWindow::on_pushButton_3H_clicked()
{
    if(Button_Clicked("3H") == true){
        ui->pushButton_3H->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_3H->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_3H->setText("・");
    }
}

void MainWindow::on_pushButton_3I_clicked()
{
    if(Button_Clicked("3I") == true){
        ui->pushButton_3I->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_3I->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_3I->setText("・");
    }
}

void MainWindow::on_pushButton_3J_clicked()
{
    if(Button_Clicked("3J") == true){
        ui->pushButton_3J->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_3J->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_3J->setText("・");
    }
}
void MainWindow::on_pushButton_4A_clicked()
{
    if(Button_Clicked("4A") == true){
        ui->pushButton_4A->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_4A->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_4A->setText("・");
    }
}

void MainWindow::on_pushButton_4B_clicked()
{
    if(Button_Clicked("4B") == true){
        ui->pushButton_4B->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_4B->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_4B->setText("・");
    }
}

void MainWindow::on_pushButton_4C_clicked()
{
    if(Button_Clicked("4C") == true){
        ui->pushButton_4C->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_4C->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_4C->setText("・");
    }
}

void MainWindow::on_pushButton_4D_clicked()
{
    if(Button_Clicked("4D") == true){
        ui->pushButton_4D->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_4D->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_4D->setText("・");
    }
}

void MainWindow::on_pushButton_4E_clicked()
{
    if(Button_Clicked("4E") == true){
        ui->pushButton_4E->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_4E->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_4E->setText("・");
    }
}

void MainWindow::on_pushButton_4F_clicked()
{
    if(Button_Clicked("4F") == true){
        ui->pushButton_4F->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_4F->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_4F->setText("・");
    }
}

void MainWindow::on_pushButton_4G_clicked()
{
    if(Button_Clicked("4G") == true){
        ui->pushButton_4G->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_4G->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_4G->setText("・");
    }
}

void MainWindow::on_pushButton_4H_clicked()
{
    if(Button_Clicked("4H") == true){
        ui->pushButton_4H->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_4H->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_4H->setText("・");
    }
}

void MainWindow::on_pushButton_4I_clicked()
{
    if(Button_Clicked("4I") == true){
        ui->pushButton_4I->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_4I->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_4I->setText("・");
    }
}

void MainWindow::on_pushButton_4J_clicked()
{
    if(Button_Clicked("4J") == true){
        ui->pushButton_4J->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_4J->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_4J->setText("・");
    }
}

void MainWindow::on_pushButton_5A_clicked()
{
    if(Button_Clicked("5A") == true){
        ui->pushButton_5A->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_5A->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_5A->setText("・");
    }
}

void MainWindow::on_pushButton_5B_clicked()
{
    if(Button_Clicked("5B") == true){
        ui->pushButton_5B->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_5B->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_5B->setText("・");
    }
}

void MainWindow::on_pushButton_5C_clicked()
{
    if(Button_Clicked("5C") == true){
        ui->pushButton_5C->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_5C->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_5C->setText("・");
    }
}

void MainWindow::on_pushButton_5D_clicked()
{
    if(Button_Clicked("5D") == true){
        ui->pushButton_5D->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_5D->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_5D->setText("・");
    }
}

void MainWindow::on_pushButton_5E_clicked()
{
    if(Button_Clicked("5E") == true){
        ui->pushButton_5E->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_5E->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_5E->setText("・");
    }
}

void MainWindow::on_pushButton_5F_clicked()
{
    if(Button_Clicked("5F") == true){
        ui->pushButton_5F->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_5F->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_5F->setText("・");
    }
}

void MainWindow::on_pushButton_5G_clicked()
{
    if(Button_Clicked("5G") == true){
        ui->pushButton_5G->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_5G->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_5G->setText("・");
    }
}

void MainWindow::on_pushButton_5H_clicked()
{
    if(Button_Clicked("5H") == true){
        ui->pushButton_5H->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_5H->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_5H->setText("・");
    }
}

void MainWindow::on_pushButton_5I_clicked()
{
    if(Button_Clicked("5I") == true){
        ui->pushButton_5I->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_5I->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_5I->setText("・");
    }
}

void MainWindow::on_pushButton_5J_clicked()
{
    if(Button_Clicked("5J") == true){
        ui->pushButton_5J->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_5J->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_5J->setText("・");
    }
}

void MainWindow::on_pushButton_6A_clicked()
{
    if(Button_Clicked("6A") == true){
        ui->pushButton_6A->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_6A->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_6A->setText("・");
    }
}

void MainWindow::on_pushButton_6B_clicked()
{
    if(Button_Clicked("6B") == true){
        ui->pushButton_6B->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_6B->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_6B->setText("・");
    }
}

void MainWindow::on_pushButton_6C_clicked()
{
    if(Button_Clicked("6C") == true){
        ui->pushButton_6C->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_6C->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_6C->setText("・");
    }
}

void MainWindow::on_pushButton_6D_clicked()
{
    if(Button_Clicked("6D") == true){
        ui->pushButton_6D->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_6D->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_6D->setText("・");
    }
}

void MainWindow::on_pushButton_6E_clicked()
{
    if(Button_Clicked("6E") == true){
        ui->pushButton_6E->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_6E->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_6E->setText("・");
    }
}

void MainWindow::on_pushButton_6F_clicked()
{
    if(Button_Clicked("6F") == true){
        ui->pushButton_6F->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_6F->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_6F->setText("・");
    }
}

void MainWindow::on_pushButton_6G_clicked()
{
    if(Button_Clicked("6G") == true){
        ui->pushButton_6G->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_6G->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_6G->setText("・");
    }
}

void MainWindow::on_pushButton_6H_clicked()
{
    if(Button_Clicked("6H") == true){
        ui->pushButton_6H->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_6H->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_6H->setText("・");
    }
}

void MainWindow::on_pushButton_6I_clicked()
{
    if(Button_Clicked("6I") == true){
        ui->pushButton_6I->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_6I->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_6I->setText("・");
    }
}

void MainWindow::on_pushButton_6J_clicked()
{
    if(Button_Clicked("6J") == true){
        ui->pushButton_6J->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_6J->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_6J->setText("・");
    }
}

void MainWindow::on_pushButton_7A_clicked()
{
    if(Button_Clicked("7A") == true){
        ui->pushButton_7A->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_7A->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_7A->setText("・");
    }
}

void MainWindow::on_pushButton_7B_clicked()
{
    if(Button_Clicked("7B") == true){
        ui->pushButton_7B->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_7B->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_7B->setText("・");
    }
}

void MainWindow::on_pushButton_7C_clicked()
{
    if(Button_Clicked("7C") == true){
        ui->pushButton_7C->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_7C->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_7C->setText("・");
    }
}

void MainWindow::on_pushButton_7D_clicked()
{
    if(Button_Clicked("7D") == true){
        ui->pushButton_7D->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_7D->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_7D->setText("・");
    }
}

void MainWindow::on_pushButton_7E_clicked()
{
    if(Button_Clicked("7E") == true){
        ui->pushButton_7E->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_7E->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_7E->setText("・");
    }
}

void MainWindow::on_pushButton_7F_clicked()
{
    if(Button_Clicked("7F") == true){
        ui->pushButton_7F->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_7F->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_7F->setText("・");
    }
}

void MainWindow::on_pushButton_7G_clicked()
{
    if(Button_Clicked("7G") == true){
        ui->pushButton_7G->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_7G->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_7G->setText("・");
    }
}

void MainWindow::on_pushButton_7H_clicked()
{
    if(Button_Clicked("7H") == true){
        ui->pushButton_7H->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_7H->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_7H->setText("・");
    }
}

void MainWindow::on_pushButton_7I_clicked()
{
    if(Button_Clicked("7I") == true){
        ui->pushButton_7I->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_7I->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_7I->setText("・");
    }
}

void MainWindow::on_pushButton_7J_clicked()
{
    if(Button_Clicked("7J") == true){
        ui->pushButton_7J->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_7J->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_7J->setText("・");
    }
}

void MainWindow::on_pushButton_8A_clicked()
{
    if(Button_Clicked("8A") == true){
        ui->pushButton_8A->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_8A->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_8A->setText("・");
    }
}

void MainWindow::on_pushButton_8B_clicked()
{
    if(Button_Clicked("8B") == true){
        ui->pushButton_8B->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_8B->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_8B->setText("・");
    }
}

void MainWindow::on_pushButton_8C_clicked()
{
    if(Button_Clicked("8C") == true){
        ui->pushButton_8C->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_8C->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_8C->setText("・");
    }
}

void MainWindow::on_pushButton_8D_clicked()
{
    if(Button_Clicked("8D") == true){
        ui->pushButton_8D->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_8D->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_8D->setText("・");
    }
}

void MainWindow::on_pushButton_8E_clicked()
{
    if(Button_Clicked("8E") == true){
        ui->pushButton_8E->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_8E->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_8E->setText("・");
    }
}

void MainWindow::on_pushButton_8F_clicked()
{
    if(Button_Clicked("8F") == true){
        ui->pushButton_8F->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_8F->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_8F->setText("・");
    }
}

void MainWindow::on_pushButton_8G_clicked()
{
    if(Button_Clicked("8G") == true){
        ui->pushButton_8G->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_8G->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_8G->setText("・");
    }
}

void MainWindow::on_pushButton_8H_clicked()
{
    if(Button_Clicked("8H") == true){
        ui->pushButton_8H->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_8H->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_8H->setText("・");
    }
}

void MainWindow::on_pushButton_8I_clicked()
{
    if(Button_Clicked("8I") == true){
        ui->pushButton_8I->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_8I->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_8I->setText("・");
    }
}

void MainWindow::on_pushButton_8J_clicked()
{
    if(Button_Clicked("8J") == true){
        ui->pushButton_8J->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_8J->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_8J->setText("・");
    }
}

void MainWindow::on_pushButton_9A_clicked()
{
    if(Button_Clicked("9A") == true){
        ui->pushButton_9A->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_9A->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_9A->setText("・");
    }
}

void MainWindow::on_pushButton_9B_clicked()
{
    if(Button_Clicked("9B") == true){
        ui->pushButton_9B->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_9B->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_9B->setText("・");
    }
}

void MainWindow::on_pushButton_9C_clicked()
{
    if(Button_Clicked("9C") == true){
        ui->pushButton_9C->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_9C->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_9C->setText("・");
    }
}

void MainWindow::on_pushButton_9D_clicked()
{
    if(Button_Clicked("9D") == true){
        ui->pushButton_9D->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_9D->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_9D->setText("・");
    }
}

void MainWindow::on_pushButton_9E_clicked()
{
    if(Button_Clicked("9E") == true){
        ui->pushButton_9E->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_9E->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_9E->setText("・");
    }
}

void MainWindow::on_pushButton_9F_clicked()
{
    if(Button_Clicked("9F") == true){
        ui->pushButton_9F->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_9F->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_9F->setText("・");
    }
}

void MainWindow::on_pushButton_9G_clicked()
{
    if(Button_Clicked("9G") == true){
        ui->pushButton_9G->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_9G->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_9G->setText("・");
    }
}

void MainWindow::on_pushButton_9H_clicked()
{
    if(Button_Clicked("9H") == true){
        ui->pushButton_9H->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_9H->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_9H->setText("・");
    }
}

void MainWindow::on_pushButton_9I_clicked()
{
    if(Button_Clicked("9I") == true){
        ui->pushButton_9I->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_9I->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_9I->setText("・");
    }
}

void MainWindow::on_pushButton_9J_clicked()
{
    if(Button_Clicked("9J") == true){
        ui->pushButton_9J->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_9J->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_9J->setText("・");
    }
}

void MainWindow::on_pushButton_10A_clicked()
{
    if(Button_Clicked("10A") == true){
        ui->pushButton_10A->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_10A->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_10A->setText("・");
    }
}

void MainWindow::on_pushButton_10B_clicked()
{
    if(Button_Clicked("10B") == true){
        ui->pushButton_10B->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_10B->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_10B->setText("・");
    }
}

void MainWindow::on_pushButton_10C_clicked()
{
    if(Button_Clicked("10C") == true){
        ui->pushButton_10C->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_10C->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_10C->setText("・");
    }
}

void MainWindow::on_pushButton_10D_clicked()
{
    if(Button_Clicked("10D") == true){
        ui->pushButton_10D->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_10D->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_10D->setText("・");
    }
}

void MainWindow::on_pushButton_10E_clicked()
{
    if(Button_Clicked("10E") == true){
        ui->pushButton_10E->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_10E->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_10E->setText("・");
    }
}

void MainWindow::on_pushButton_10F_clicked()
{
    if(Button_Clicked("10F") == true){
        ui->pushButton_10F->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_10F->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_10F->setText("・");
    }
}

void MainWindow::on_pushButton_10G_clicked()
{
    if(Button_Clicked("10G") == true){
        ui->pushButton_10G->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_10G->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_10G->setText("・");
    }
}

void MainWindow::on_pushButton_10H_clicked()
{
    if(Button_Clicked("10H") == true){
        ui->pushButton_10H->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_10H->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_10H->setText("・");
    }
}

void MainWindow::on_pushButton_10I_clicked()
{
    if(Button_Clicked("10I") == true){
        ui->pushButton_10I->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_10I->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_10I->setText("・");
    }
}

void MainWindow::on_pushButton_10J_clicked()
{
    if(Button_Clicked("10J") == true){
        ui->pushButton_10J->setIcon(QIcon(":/Images/fire.png"));
        ui->pushButton_10J->setIconSize(QSize(35,35));
    }
    else {
        ui->pushButton_10J->setText("・");
    }
}
