using NodaTime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using cours_mvvm1.MVVM.Model;

namespace cours_mvvm1.MVVM.ViewModel
{
     class OrdersMV: utilities.ViewModelBase
    {
        public readonly PageModel _pageModel;

        public LocalDate DisplayOrderDate
        {
            get { return _pageModel.OrderDate; }
            set { _pageModel.OrderDate = value; OnPropertyChanged(); }
        }

        public OrdersMV()
        {
            _pageModel = new PageModel();
            DisplayOrderDate = LocalDate.FromDateTime(DateTime.Now);
        }
    }
}
