#ifndef GESTIONEMP_H
#define GESTIONEMP_H

#include <QMainWindow>

namespace Ui {
class GestionEmp;
}

class GestionEmp : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestionEmp(QWidget *parent = nullptr);
    ~GestionEmp();

private slots:
    void on_chatBtn_clicked();

    void on_addBtn_clicked();

    void on_refreshBtn_clicked();

    void setFormulaire();

    void on_clearBtn_clicked();

    void on_updateBtn_clicked();

    void on_chercheBtn_clicked();

    void on_trieBtn_clicked();

private:
    Ui::GestionEmp *ui;
};

#endif // GESTIONEMP_H
