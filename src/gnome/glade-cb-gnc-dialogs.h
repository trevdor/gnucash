#include <gnome.h>


void
gnc_ui_account_picker_select_cb        (GtkTree         *tree,
                                        GtkWidget       *widget,
                                        gpointer         user_data);

void
gnc_ui_account_picker_ok_cb            (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_account_picker_cancel_cb        (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_print_preview_OK_cb             (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_print_dialog_select_printer_cb  (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_print_dialog_select_paper_cb    (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_print_dialog_ok_cb              (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_print_dialog_preview_cb         (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_print_dialog_cancel_cb          (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_print_dialog_help_cb            (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_paper_dialog_ok_cb              (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_paper_dialog_cancel_cb          (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_print_check_dialog_ok_cb        (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_print_check_dialog_cancel_cb    (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_print_check_dialog_help_cb      (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_find_transactions_dialog_early_date_toggle_cb
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
gnc_ui_find_transactions_dialog_late_date_toggle_cb
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
gnc_ui_find_transactions_dialog_search_type_cb
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
gnc_ui_find_transactions_dialog_ok_cb  (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_find_transactions_dialog_cancel_cb
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_find_transactions_dialog_help_cb
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_select_commodity_namespace_changed_cb
                                        (GtkEditable     *editable,
                                        gpointer         user_data);

void
gnc_ui_select_commodity_ok_cb          (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_select_commodity_new_cb         (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_select_commodity_cancel_cb      (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_new_commodity_ok_cb             (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_new_commodity_cancel_cb         (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_new_commodity_help_cb           (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_account_window_select_currency_cb  (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_account_window_select_security_cb  (GtkButton       *button,
                                        gpointer         user_data);

gboolean
gnc_ui_commodity_druid_cancel_cb       (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

void
gnc_ui_commodity_druid_finish_cb       (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

void
gnc_ui_qif_import_cancel_cb            (GnomeDruid      *gnomedruid,
                                        gpointer         user_data);

gboolean
gnc_ui_qif_import_load_file_next_cb    (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

void
gnc_ui_qif_import_select_file_cb       (GtkButton       *button,
                                        gpointer         user_data);

gboolean
gnc_ui_qif_import_date_format_next_cb  (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

gboolean
gnc_ui_qif_import_default_acct_next_cb (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

gboolean
gnc_ui_qif_import_default_acct_back_cb (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

void
gnc_ui_qif_import_loaded_files_prepare_cb
                                        (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

void
gnc_ui_qif_import_select_loaded_file_cb
                                        (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data);

void
gnc_ui_qif_import_load_another_cb      (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_qif_import_unload_file_cb       (GtkButton       *button,
                                        gpointer         user_data);

void
gnc_ui_qif_import_accounts_prepare_cb  (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

void
gnc_ui_qif_import_account_line_select_cb
                                        (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data);

void
gnc_ui_qif_import_categories_prepare_cb
                                        (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

gboolean
gnc_ui_qif_import_categories_next_cb   (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

void
gnc_ui_qif_import_category_line_select_cb
                                        (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data);

gboolean
gnc_ui_qif_import_currency_next_cb     (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

void
gnc_ui_qif_import_commodity_prepare_cb (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);

void
gnc_ui_qif_import_finish_cb            (GnomeDruidPage  *gnomedruidpage,
                                        gpointer         arg1,
                                        gpointer         user_data);