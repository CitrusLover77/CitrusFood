#include "DashboardView.h"
#include "StockService.h"
#include "MostOrderedService.h"
using namespace System::Collections::Generic;
using namespace CitrusFood;

void DashboardView::loadLowStock() {
	array<Label^>^ labels = {
		labelStock1,
		labelStock2,
		labelStock3,
		labelStock4,
		labelStock5
	};

	for each (Label ^ lbl in labels) {
		lbl->Text = "";
		lbl->Visible = false;
	}
	List<StockDTO^>^ lowStock = StockService::GetLowStock(5);

	for (int i = 0; i < lowStock->Count && labels->Length; i++) {
		labels[i]->Text =
			lowStock[i]->ingredientName + "(" + lowStock[i]->quantity + ")";
		labels[i]->Visible = true;
	}
}
void DashboardView::mostOrdered() {
	array<Label^>^ labels = {
		labelMasPedidos1,
		labelMasPedidos2,
		labelMasPedidos3,
		labelMasPedidos4,
		labelMasPedidos5
	};
	for each (Label ^ lbl in labels) {
		lbl->Text = "";
		lbl->Visible = false;
	}
	List<MostOrderedDTO^>^ mostOrdered = MostOrderedService::GetMostOrdered(5);

	for (int i = 0; i < mostOrdered->Count && labels->Length; i++) {
		labels[i]->Text =
			mostOrdered[i]->productName + "(" + mostOrdered[i]->orderCount + ")";
		labels[i]->Visible = true;
	}
}