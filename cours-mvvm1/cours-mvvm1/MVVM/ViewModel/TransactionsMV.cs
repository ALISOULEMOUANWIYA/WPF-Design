using cours_mvvm1.MVVM.Model;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cours_mvvm1.MVVM.ViewModel
{
    internal class TransactionsMV : utilities.ViewModelBase
    {
        public readonly PageModel _pageModel;

        public decimal TransactionAmount
        {
            get { return _pageModel.TransactionValue; }
            set { _pageModel.TransactionValue = value; OnPropertyChanged(); }
        }

        public TransactionsMV()
        {
            _pageModel = new PageModel();
            TransactionAmount = 5638;
        }
    }
}
