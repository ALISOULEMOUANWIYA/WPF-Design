
using NodaTime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using cours_mvvm1.MVVM.Model;

namespace cours_mvvm1.MVVM.ViewModel
{
     class ProductsMV: utilities.ViewModelBase
    {
        public readonly PageModel _pageModel;

        public string ProductAvailability
        {
            get { return _pageModel.ProductStatus; }
            set { _pageModel.ProductStatus = value; OnPropertyChanged(); }
        }

        public ProductsMV()
        {
            _pageModel = new PageModel();
            ProductAvailability = "Ouf of stock";
        }
    }
}
