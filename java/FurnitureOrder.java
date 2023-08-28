import java.util.HashMap;
import java.util.Map.Entry;

public class FurnitureOrder implements FurnitureOrderInterface {

    private HashMap<Furniture, Integer> order;

    FurnitureOrder() {
        order = new HashMap<>();
    }

    @Override
    public void addToOrder(Furniture type, int furnitureCount) {
        if (type == null) {
            return;
        }

        if (!order.containsKey(type)) {
            order.put(type, furnitureCount);
        } else {
            int currentCount = order.get(type);
            order.replace(type, currentCount + furnitureCount);
        }
    }

    @Override
    public HashMap<Furniture, Integer> getOrderedFurniture() {
        return new HashMap<>(order);
    }

    @Override
    public float getTotalOrderCost() {
        float totalCost = 0;
        for (Entry<Furniture, Integer> entry: order.entrySet()) {
            Furniture type = entry.getKey();
            float count = entry.getValue();
            totalCost += type.cost() * count;
        }
        return totalCost;
    }

    @Override
    public int getTotalOrderQuantity() {
        int totalQuantity = 0;
        for (Entry<Furniture, Integer> entry: order.entrySet()) {
            totalQuantity += entry.getValue();
        }
        return totalQuantity;
    }

    @Override
    public float getTypeCost(Furniture type) {
        if (!order.containsKey(type)) {
            return 0;
        }
        return type.cost() * order.get(type);
    }

    @Override
    public int getTypeCount(Furniture type) {
        if (!order.containsKey(type)) {
            return 0;
        }
        return order.get(type);
    }
    
}
