using cours_mvvm1.MVVM.Model;
using cours_mvvm1.MVVM.View;
using cours_mvvm1.utilities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;

namespace cours_mvvm1.MVVM.ViewModel
{
     class NavigationsMV: utilities.ViewModelBase
    {
        public Object _currentView;

        public Object CurrentView
        {
            get { return _currentView; }
            set { _currentView = value; OnPropertyChanged(); }
        }

        public ICommand HomeCommand{ get; set; }
        public ICommand CustomersCommand{ get; set; }
        public ICommand ProductsCommand{ get; set; }
        public ICommand OrdersCommand{ get; set; }
        public ICommand TransactionsCommand{ get; set; }
        public ICommand ShipmentsCommand{ get; set; }
        public ICommand SettingsCommand{ get; set; }

        private void Home(Object obj) => CurrentView = new HomeMV();
        private void Customers(Object obj) => CurrentView = new CustomersMV();
        private void Prpducts(Object obj) => CurrentView = new ProductsMV();
        private void Orders(Object obj) => CurrentView = new OrdersMV();
        private void Transactions(Object obj) => CurrentView = new TransactionsMV();
        private void Shipments(Object obj) => CurrentView = new ShipmentsMV();
        private void Settings(Object obj) => CurrentView = new SettingsMV();


        public NavigationsMV()
        {
            HomeCommand = new RelayCommand(Home);
            CustomersCommand = new RelayCommand(Customers);
            ProductsCommand = new RelayCommand(Prpducts);
            OrdersCommand = new RelayCommand(Orders);
            TransactionsCommand = new RelayCommand(Transactions);
            ShipmentsCommand = new RelayCommand(Shipments);
            SettingsCommand = new RelayCommand(Settings);

            // Startup Page
            CurrentView = new HomeMV();
        }
    }
}
