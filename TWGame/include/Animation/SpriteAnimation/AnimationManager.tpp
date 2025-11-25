inline constexpr int offSetPerColor{ 4 };

inline constexpr int calculateIndex(const SoldierColor color, const SoldierDirection direction)
{
	int index{ static_cast<int>(color) * offSetPerColor };
	index += static_cast<int>(direction);
	return index;
}

template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getWalkAnimationPointer(const SoldierColor color, const SoldierDirection direction)
{
	return allWalkingAnimations[calculateIndex(color,direction)];
}

 template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getIdleAnimationPointer(const SoldierColor color, const SoldierDirection direction)
 {
	 return allIdleAnimations[calculateIndex(color, direction)];
 }

 template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getSitAnimationPointer(const SoldierColor color, const SoldierDirection direction)
 {
	 return allSittingAnimations[calculateIndex(color, direction)];
 }

 template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getPunchAnimationPointer(const SoldierColor color, const SoldierDirection direction)
 {
	 return allPunchingAnimations[calculateIndex(color, direction)];
 }

 template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getGetHitAnimationPointer(const SoldierColor color, const SoldierDirection direction)
 {
	 return allGettingHitAnimations[calculateIndex(color, direction)];
 }

 template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getDieAnimationPointer(const SoldierColor color, const SoldierDirection direction)
 {
	 return allDyingAnimations[calculateIndex(color, direction)];
 }